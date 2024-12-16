#include<stdio.h>
#include<stdlib.h>

struct node{

    int data;
    struct node *next;

};
struct node *head;
/*function for to insert a value in the start of the list*/
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

/*function for to insert a value in the last of the list*/
void InsertInLast()
{
    struct node *ptr, *temp;
    int item;
    ptr = (struct node *)malloc(sizeof(struct node));
    if (ptr == NULL)
    {
        printf("\nOVERFLOW");
    }
    else
    {
        printf("\nEnter value: ");
        scanf("%d", &item);
        ptr->data = item;
        if (head == NULL)
        {
            ptr->next = NULL;
            head = ptr;
            printf("Item inserted");
        }
        else
        {
            temp = head;
            while (temp->next != NULL)
            {
                temp = temp->next;
            }
            temp->next = ptr;
            ptr->next = NULL;
            printf("Item inserted");
        }
    }
}
void randomInsert(){
    int i, loc, item;
    struct node *ptr, *temp;
    ptr = (struct node *)malloc(sizeof(struct node));
    if (ptr == NULL)
    {
        printf("\nOVERFLOW");
    }
   
    
}

int main(){

    InsertInStart();
    InsertInLast();

    return 0;
}