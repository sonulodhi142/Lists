#include<stdio.h>
#include<stdlib.h>

struct node{

    int data;
    struct node *next;

};
struct node *head;

void InsertInStart(){
    struct node *ptr;
    int item;
    ptr = (struct node *)malloc(sizeof(struct node *));
    if(ptr == NULL){
        printf("\n THE LIST IS FULL\n");
    }
    else{
        printf("enter the value::");
        scanf("%d", &item);
        ptr->data = item;
        ptr->next = head;
        head = ptr;
        printf("Item is inserted in the list \n");
    }
}

int main(){

    InsertInStart();

    return 0;
}