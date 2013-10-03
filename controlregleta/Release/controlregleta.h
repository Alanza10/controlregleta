/*
 * controlregleta.h
 *
 *  Created on: 03/10/2013
 *      Author: root
 */

#ifndef CONTROLREGLETA_H_
#define CONTROLREGLETA_H_

//control & protocol
#define MSG_LEN  14
#define RELAY_MSG_LEN 3
#define RELAY_MSG_LEN_TIMED  5
#define TIME_HEADER  'T'
#define SHOW_SATUS_HEADER  'S'
#define PROG_HEADER  'P'
#define RELAY_HEADER  'R'
#define RELAY_ON  'E'
#define RELAY_OFF  'A'
#define DURATION 'D'
#define RELAY_COUNT 4
#define TIME_REQUEST  '\a' //7 ASCII code BELL in C
#define COMPLETE_CHAR 'X'
#define TZ_ADJUST +2
#define RELAY_1 '1'
#define RELAY_2 '2'
#define RELAY_3 '3'
#define RELAY_4 '4'
#define HELP '?'
#define CONFIG_HEADER ''

#define DEFAULT_BAUDRATE   115200
#define DEFAULT_SERDEVICE  "/dev/ttyAMA0"
#define ENDMINITERM        0x1d

void child_handler(int s);
int cook_baud(int baud);
void progresend();

#endif /* CONTROLREGLETA_H_ */
