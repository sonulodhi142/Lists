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

void intialize(list *lp){

    lp->start = NULL;
    lp->end = NULL;

}

void display(list *lp){

    node *p;
    p = lp->start;

    while (p != NULL)
    {
        printf('%d /n', p->data);

        p = p->next;
    }
    

}




int main(){
    


    return 0;
}