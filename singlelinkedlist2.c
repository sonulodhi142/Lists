#include <stdio.h>
#include <stdlib.h>

typedef int item_type;

typedef struct n_tag
{
    item_type data;
    struct n_tag *next;
} node;

typedef struct l_tag
{
    node *start;
    node *end;

} list;

node *create_node(item_type x)
{
    node *p;
    p = (node *)malloc(sizeof(node));
    if (p == NULL)
    {
        printf("memory does not avilabel");
    }

    p->data = x;
    p->next = NULL;

    return p;
}

void intialize(list *lp)
{

    lp->start = NULL;
    lp->end = NULL;
}

void display(list *lp)
{

    node *p;
    p = lp->start;

    while (p != NULL)
    {
        printf("%d \n", p->data);

        p = p->next;
    }
}

void insert_at_head(list *lp, item_type x){
    node *newp;
    newp = create_node(x);
    
    if(lp->start == NULL){
        lp->start = newp;
        lp->end = newp;
    }
    else{
    newp->next = lp->start;
    lp->start = newp;   
    }
}

void insert_at_tail(list *lp, item_type x){
    node *newp;
    newp = create_node(x);
    
    if(lp->start == NULL){
        lp->start = newp;
        lp->end = newp;
    }
    else{
    lp->end->next = newp;
    lp->end = newp;   
    }
}

int main()
{
    list *lp = (list *)malloc(sizeof(list)); // Allocate memory for the list
    if (lp == NULL)
    {
        printf("Memory allocation for list failed\n");
        return 1;
    }
    intialize(lp);
    insert_at_head(lp, 55);
    insert_at_head(lp, 2);
    insert_at_head(lp, 3);
    insert_at_head(lp, 4);
    insert_at_tail(lp, 100);
    display(lp);

    return 0;
}