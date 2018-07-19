#!/bin/sh
cat annuaire.txt | grep "BauEr" | cut -c 26- | rev | cut -c 23- | rev
