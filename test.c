


#include<vertex.h>
#include<edge.h>
#include<graph.h>
#include<log.h>
void main (){
    log__init();
    graph * g=create_graph("First");
    vertex * v1=create_vertex("A");
    vertex * v2=create_vertex("B");
    vertex * v3=create_vertex("C");
    vertex * v4=create_vertex("D");
    vertex * v5=create_vertex("E");
    add_vertex_to_graph(g,v1);
    add_vertex_to_graph(g,v2);
    add_vertex_to_graph(g,v3);
    add_vertex_to_graph(g,v4);
    add_vertex_to_graph(g,v5);
    edge * e1=create_edge("AB",v1,v2);
    edge * e2=create_edge("BC",v2,v3);
    edge * e3=create_edge("AD",v1,v4);
    edge * e4=create_edge("BE",v2,v5);
    log__exit();
    return 0;
}
