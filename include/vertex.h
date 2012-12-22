#ifndef  VERTEX_H
#define VERTEX_H
#include<util.h>
#include<list.h>

typedef struct {

  int id;
  char  Name[15];
  void * private;
  struct list_head  edge_list;
  void * hook_func;

}vertex;

#endif
