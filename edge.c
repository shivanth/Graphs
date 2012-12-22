#include<edge.h>
#include<util.h>
#include<stdio.h>
#include<string.h>



edge * create_edge(char * name,vertex *  v1,vertex *  v2){

    edge * e=(edge*)malloc(sizeof(edge));


    e->id=get_id();

    struct list_head* lh1=malloc(sizeof(struct list_head));
    struct list_head* lh2=malloc(sizeof(struct list_head));

    lh1->data=(void*)e;
    lh2->data=(void*)e;


    //  adding v1 as vertex1
    e->vertex1=v1;
    list_add(lh1,&((e->vertex1)->edge_list));


    //adding v2 as vertex2 
    e->vertex2=v2;
    list_add(lh2,&((e->vertex2)->edge_list));

    if(name!=NULL || strlen(name)>15)
	strcpy(e->Name,name);
    return e;  
}
