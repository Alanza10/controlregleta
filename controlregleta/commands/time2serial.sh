#!/bin/sh
if [ -z "$1" ]; then 
    echo usage: $0 tty
    exit
fi
END="XXX";
TZ_adjust=+2;  echo T$(($(date +%s)+60*60*$TZ_adjust))$END > $1
