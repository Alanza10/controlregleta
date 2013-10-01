#!/bin/sh
if [ -z "$1" ]; then 
    echo usage: $0 tty
    exit
fi
echo "SXXXXXXXXXXXXX" > $1
date
