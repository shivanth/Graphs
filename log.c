#include<log.h>
#include<string.h>
void log__init(){
    LOG_FILE=fopen("aaraphs.log","w");
    fprintf(LOG_FILE,"hi");
}

void log__exit(){
    fflush(LOG_FILE);
    fsync(LOG_FILE);
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
	fflush(LOG_FILE);
    }
}


int log_level(const char* level){
    int level_int;
    if(!strcmp(level,"SEVERE"))
	level_int=1;
    if(!strcmp(level,"WARNING"))
	level_int=2;
    if(!strcmp(level,"NOTICE"))
	level_int=3;
    if(!strcmp(level,"INFO"))
	level_int=4;
    if(!strcmp(level,"DEBUG"))
	level_int=5;

    if(LOG_LEVEL > level_int)
	return 1;
    else
	return 0;
    
    
    
}
