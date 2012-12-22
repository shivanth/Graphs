#ifndef GRAPH_H
#define GRAPH_H 

#include<edge.h>
#include<vertex.h>


typedef struct{
  int id;
  int size;
  char Name [15];
  struct list_head  vertex_list;
  
}graph;

void * create_graph(char * name);
void add_vertex_to_graph(graph * g,vertex *  v1);

#endif

