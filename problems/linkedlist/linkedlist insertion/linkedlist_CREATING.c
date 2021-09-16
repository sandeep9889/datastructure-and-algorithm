#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node * next;
};
int main()
{ 
    struct  node *head;
     struct  node *second;
      struct  node *third;
      //allocate memory of node in heap
    head = (struct node*) malloc(sizeof(struct node));
    second = (struct node*) malloc(sizeof(struct node));
    third = (struct node*) malloc(sizeof(struct node));
    //linke 1st and 2nd node
    head->data=7;
    head->next=second;
    //2nd and 3rd node
    second->data=11;
    second->next=third;
    //terminate the list 3rd
    third->data=68;
    third->next=NULL;

    
    
return 0;
}
