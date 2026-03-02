#!/usr/bin/env python3
"""Scrape supermotocross.com/schedule/ and output data/smx-schedule.json."""

import json
import re
import sys
from datetime import datetime, timezone
from pathlib import Path

import requests
from bs4 import BeautifulSoup

URL = "https://supermotocross.com/schedule/"
OUTPUT = Path(__file__).resolve().parent.parent / "data" / "smx-schedule.json"

MONTH_MAP = {
    "jan": 1, "feb": 2, "mar": 3, "apr": 4, "may": 5, "jun": 6,
    "jul": 7, "aug": 8, "sep": 9, "oct": 10, "nov": 11, "dec": 12,
}

SERIES_MAP = {"sx": "SX", "mx": "MX", "smx": "SMX"}


def infer_year(month: int) -> int:
    """Infer the year for an event based on month.

    SX season runs Jan-May, MX runs May-Aug, SMX playoffs Sep-Oct.
    The schedule page is for the current season, so we use the current year
    from the page's modified time or fall back to now.
    """
    return datetime.now().year


def parse_round_info(round_text: str, series: str) -> tuple[int, str]:
    """Parse round text like 'Round 9' or 'Playoff 1' into (round_number, event_name)."""
    round_text = round_text.strip()
    prefix = SERIES_MAP.get(series, "SX")

    # "World Championship Final" - only SMX series gets generic name
    if "championship" in round_text.lower() or "final" in round_text.lower():
        if series == "smx":
            return 0, "SMX World Championship"
        # SX/MX finales keep their series prefix
        return 0, f"{prefix} Finale"

    # "Playoff 1", "Playoff 2"
    playoff = re.match(r"Playoff\s+(\d+)", round_text, re.IGNORECASE)
    if playoff:
        return int(playoff.group(1)), f"SMX Playoff Rd {playoff.group(1)}"

    # "Round N"
    rd = re.match(r"Round\s+(\d+)", round_text, re.IGNORECASE)
    if rd:
        num = int(rd.group(1))
        return num, f"{prefix} Rd {num}"

    return 0, round_text


def scrape() -> list[dict]:
    """Scrape the schedule page and return a list of events."""
    resp = requests.get(URL, timeout=30, headers={
        "User-Agent": "Mozilla/5.0 (compatible; SMXScheduleBot/1.0)"
    })
    resp.raise_for_status()

    soup = BeautifulSoup(resp.text, "html.parser")
    events = []

    for item in soup.select("div.event-item"):
        classes = item.get("class", [])

        # Determine series from CSS class
        series = "sx"
        for s in ("smx", "mx", "sx"):
            if s in classes:
                series = s
                break

        # Extract data fields
        round_el = item.select_one(".details .round")
        venue_el = item.select_one(".details .venue")
        location_el = item.select_one(".details .location")
        date_el = item.select_one(".heading .date")

        if not date_el:
            continue

        round_text = round_el.get_text(strip=True) if round_el else ""
        venue = venue_el.get_text(strip=True) if venue_el else ""
        location = location_el.get_text(strip=True) if location_el else ""
        date_text = date_el.get_text(strip=True).lower()  # "07 mar"

        # Parse date
        date_match = re.match(r"(\d{1,2})\s+(\w{3})", date_text)
        if not date_match:
            continue

        day = int(date_match.group(1))
        month = MONTH_MAP.get(date_match.group(2))
        if not month:
            continue

        year = infer_year(month)
        date_str = f"{year}-{month:02d}-{day:02d}"

        # Build event name
        round_num, event_name = parse_round_info(round_text, series)

        # Append location info to SX/MX event names
        # MX uses venue name (e.g., "Fox Raceway"), SX uses city (e.g., "Indianapolis")
        if series == "mx" and venue:
            event_name = f"{event_name} - {venue}"
        elif series == "sx" and location:
            city = location.split(",")[0].strip()
            event_name = f"{event_name} - {city}"

        events.append({
            "date": date_str,
            "name": event_name,
            "venue": venue,
            "location": location,
            "series": SERIES_MAP.get(series, "SX"),
            "round": round_num,
        })

    return events


def main():
    events = scrape()

    if not events:
        print("ERROR: No events found on schedule page", file=sys.stderr)
        sys.exit(1)

    # Sort by date
    events.sort(key=lambda e: e["date"])

    output = {
        "updated": datetime.now(timezone.utc).strftime("%Y-%m-%dT%H:%M:%SZ"),
        "season": datetime.now().year,
        "events": events,
    }

    OUTPUT.parent.mkdir(parents=True, exist_ok=True)
    OUTPUT.write_text(json.dumps(output, indent=2) + "\n")
    print(f"Wrote {len(events)} events to {OUTPUT}")


if __name__ == "__main__":
    main()
