#include<edge.h>
#include<util.h>
#include<stdio.h>



edge * create_edge(char * name,vertex *  v1,vertex *  v2){

  edge *  e=(edge*)malloc(sizeof(edge));
  e->id=get_id();
  e->v1=v1;
  e->v2=v2;
  if(name!=NULL)
    strcpy(e->Name,name);
  return e;  
}
