#include<vertex.h>
#include<util.h>
#include<string.h>
#include<log.h>


void * create_vertex(char * name){

    //allocate memory
    vertex * v =(vertex *) malloc(sizeof(vertex));
    
    
    v->id= get_id();
    
    //Initialising the edge list 
    //This list will be populated every time we connect an edge to this vertex  
    INIT_LIST_HEAD(&(v->edge_list));
    
    
    if(name!=NULL&&strlen(name)<15)
	strcpy(v->Name,name);
    else
	LOG_NOTICE("Notice: Name passed for vertex is invalid for id:%d",v->id);
    
    
    return v;

}


