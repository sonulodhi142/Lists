#include<stdio.h>
#include<malloc.h>

typedef int item_type;


typedef struct  n_tag{
    item_type data;
    struct n_tag *next;
}node;

typedef struct l_tag{
    node *start;
    node *end;

}list;

node *create_node(item_type x){
    node *p;
    p = (node*)malloc(sizeof(node));
    if(p==NULL){
        printf("memory does not avilabel");
    }

    p->data = x;
    p->next = NULL;

    return p;
}




int main(){
    


    return 0;
}