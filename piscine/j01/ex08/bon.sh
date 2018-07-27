#!/bin/sh
ldapsearch -Q -L "sn=*bon*" | grep "^sn" | wc -l | awk '{print $1}'