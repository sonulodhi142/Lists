#include<stdio.h>
#include<stdlib.h>

struct node{

    int data;
    struct node *next;

};
struct node *head;

// add all neccessary functions

void InsertInStart();
void InsertInLast();
void randomInsert();
void last_delete();
void random_delete();
void begin_delete();
void display();
void search();


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
    else{
        printf("Enter Value: ");
        scanf("%d", &item);
        ptr->data = item;
        printf("\nEnter the location: ");
        scanf("%d", &loc);
        temp = head;
        for (i = 1; i < loc; i++)
        {
            temp = temp->next;
            if (temp == NULL)
            {
                printf("\ncan't insert\n");
                return;
            }
        }
        ptr->next = temp->next;
        temp->next = ptr;
        printf("Item inserted");
    }
    
}

void last_delete(){
    struct node *ptr, *ptrl;
    if (head == NULL){
        printf("\nList is empty");
    }
    else if (head->next == NULL){
        head = NULL;
        free(head);
        printf("\nOnly node of the list deleted ..\n");
    }
    else{
        ptr = head;
        while (ptr->next != NULL)
        {
            ptrl = ptr;
            ptr = ptr->next;
        }
        ptrl->next = NULL;
        free(ptr);
        printf("Item deleted\n");
    }
    
}

void random_delete(){

}

void begin_delete(){

}

void display(){

}

void search(){
    
}

int main(){

    InsertInStart();
    InsertInLast();

    return 0;
}