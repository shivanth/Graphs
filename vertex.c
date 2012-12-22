#include<vertex.h>
#include<util.h>
#include<string.h>
#include<log.h>


void * create_vertex(char * name){

  vertex * v =(vertex *) malloc(sizeof(vertex));
  v->id= get_id();
  if(name!=NULL&&strlen(name)<15)
    strcpy(v->Name,name);
  else
    LOG_NOTICE("Notice: Name passed for vertex is invalid for id:",v->id);


  return v;
}


