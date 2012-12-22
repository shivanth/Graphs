


#include<vertex.h>
#include<edge.h>


void main (){
  log__init();
  vertex * v1=create_vertex("A");
  vertex * v2=create_vertex("B");
  edge * e=create_edge("AB",v1,v2);


  return 0;
}
