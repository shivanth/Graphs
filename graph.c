#include<graph.h>
#include<stdlib.h>
#include<log.h>

void * create_graph(char * name){

    graph * g =(graph*) malloc(sizeof(graph));
    g->id=get_id();
    //    g->size=size;

    g->id= get_id();
    INIT_LIST_HEAD(&(g->vertex_list));
    if(name!=NULL&&strlen(name)<15)
    	strcpy(g->Name,name);
    else
	LOG_NOTICE("Name passed for graph is invalid for id:",g->id);
    return g;
}


void add_vertex_to_graph(graph * g,vertex *  v1){
    LOG_NOTICE("Added vertex  %s to graph %s" ,v1->Name,g->Name);
    struct list_head* lh1=malloc(sizeof(struct list_head));
    lh1->data=(void*)v1;
    list_add(lh1,&(g->vertex_list));
}

void print_graph_as_matrix(){

}
