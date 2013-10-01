#!/bin/sh
if [ $# = 3 ]; then 
    echo "P$2$3" > $1
 	exit
fi                                                               
  echo usage: $0 tty rele HHMMSSHHMMSS                                                             
  


