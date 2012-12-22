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
#define LOG_NOTICE(fmt,...) log_write("NOTICE",fmt"\n",##__VA_ARGS__) 


void log__init(){
  LOG_FILE=fopen("Graphs.log","w");
}

void log__exit(){
  fclose(LOG_FILE);
}




void log_write(const char * level,const char * fmt,...){
  if(!log_level(level))
    return;
  va_list arg;
  if(LOG_FILE){
    va_start(arg,fmt);  
    fprintf(LOG_FILE,level);
    vfprintf(LOG_FILE,fmt,arg);
    va_end(arg);
  }
}


int log_level(const char* level){
  int level_int;
  if(strcmp(level,"SEVERE"))
    level_int=1;
  if(strcmp(level,"WARNING"))
    level_int=2;
  if(strcmp(level,"NOTICE"))
    level_int=3;
  if(strcmp(level,"INFO"))
    level_int=4;
  if(strcmp(level,"DEBUG"))
    level_int=5;

  if(LOG_LEVEL > level_int)
    return 0;
  else
    return 1;



}
