#ifndef  VERTEX_H
#define VERTEX_H
#include<util.h>


typedef struct {

  int id;
  char  Name[15];
  void * private;
  void * edge_list;//implemented as an array containing pointers to edges
  void * hook_func;

}vertex;

#endif
