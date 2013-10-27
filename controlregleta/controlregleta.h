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
#define CONFIG_HEADER 0x1e
#define RELAY_HEADER  'R'
#define RELAY_ON  'E'
#define RELAY_OFF  'A'
#define DURATION 'D'
#define RELAY_COUNT 4
#define TIME_REQUEST  '\a' //7 ASCII code BELL in C
#define COMPLETE_CHAR 'X'
#define TZ_ADJUST "Europe/Madrid"
#define RELAY_1 '1'
#define RELAY_2 '2'
#define RELAY_3 '3'
#define RELAY_4 '4'
#define HELP '?'
#define CONFIG_FILE "/etc/controlregleta.cfg"
#define MAXBUF 1024
#define DELIM "="

#define DEFAULT_BAUDRATE   115200
#define DEFAULT_SERDEVICE  "/dev/ttyAMA0"
#define ENDMINITERM        0x1d

void child_handler(int s);
int cook_baud(int baud);
void progresend(int fd);
struct config get_config(char *filename);

struct config
{
   char relay1[MAXBUF];
   char prog1[MAXBUF];
   char relay2[MAXBUF];
   char prog2[MAXBUF];
   char relay3[MAXBUF];
   char prog3[MAXBUF];
   char relay4[MAXBUF];
   char prog4[MAXBUF];
};

#endif /* CONTROLREGLETA_H_ */
