#!/bin/bash
#source /etc/controlregleta.cfg
function cfg_parser(){
	eval "$(echo "$ttay")" # eval the result
}
ttay="tty" 
cfg_parser
#sh /home/pi/cs/controlregleta/commands/programar.sh $tty $relay1 $prog1
	
