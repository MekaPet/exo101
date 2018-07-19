#!/bin/sh
find . -name "*.sh" | awk -F '/' '{print $NF}' | rev | cut -d '.' -f 2 | rev