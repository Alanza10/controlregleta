#!/bin/sh 
if [ $# = 2 ]; then 
 END="XXXXXXXXXXX";                                                         
 echo "RE$2$END" > $1
 exit
fi                                                               
  echo usage: $0 tty rele 
   

