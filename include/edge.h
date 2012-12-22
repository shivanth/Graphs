#ifndef EDGE_H
#define EDGE_H
#include <vertex.h>
#include<list.h>


typedef struct {

  int id;
  char  Name[15];
  void * private;
  vertex * vertex1 ,* vertex2;
  void * hookup;

}edge;

#endif
