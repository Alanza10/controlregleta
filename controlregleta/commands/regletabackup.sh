#!/bin/bash
CONFIGFILE="/etc/controlregleta.cfg"

#defaults
TTY=/dev/ttyUSB0
RELAY1=0
RELAY2=0
RELAY3=0
RELAY4=0
PROG1=000000000000
PROG2=000000000000
PROG3=000000000000
PROG4=000000000000

#volcado de las configuraciones
eval `sed '/^ *#/d;s/=/ /;' < "$CONFIGFILE" |  
while read key val
do
    str="$key='$val'"   
     echo "$str"
done`

if [ "$RELAY1" -eq 1  ]; then 
	sh /home/pi/cs/controlregleta/commands/programar.sh $TTY $RELAY1 $PROG1
fi

if [ "$RELAY2" -eq 2  ]; then 
	sh /home/pi/cs/controlregleta/commands/programar.sh $TTY $RELAY2 $PROG2
fi

if [ "$RELAY3" -eq 3  ]; then 
	sh /home/pi/cs/controlregleta/commands/programar.sh $TTY $RELAY4 $PROG2
fi

if [ "$RELAY4" -eq 4  ]; then 
	sh /home/pi/cs/controlregleta/commands/programar.sh $TTY $RELAY4 $PROG4
fi
	
