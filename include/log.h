#include<string.h>
#include<stdarg.h>
#include<stdio.h>
#include<stdlib.h>
#define LOG_LEVEL 5

FILE * LOG_FILE;

void log__init();
void log_write(const char * level,const char * fmt,...);
void log__exit();
int log_level(const char* level);
/*Levels of Log
  1-Severe
  2-Warning
  3-Notice
  4-Info
  5-Debug
*/
void log_write(const char * level,const char * fmt,...) 
  __attribute__((format (printf,2,3)));
#define LOG_NOTICE(fmt,...) log_write("NOTICE:",fmt"\n",##__VA_ARGS__) 


