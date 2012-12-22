#ifndef EDGE_H
#define EDGE_H
#include <vertex.h>



typedef struct {

  int id;
  char  Name[15];
  void * private;
  vertex * v1 ,* v2;
  void * hookup;

}edge;

#endif
