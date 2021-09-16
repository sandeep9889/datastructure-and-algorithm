#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node * next;
};
struct node * insertatfirst(struct node * head,int data)
{
   struct node * ptr =(struct node * )malloc(sizeof(struct node));
   ptr->next=head;
   ptr->data=data;
   return ptr;

}
void linkedlisttransversal(struct node*ptr)
{ 
 while(ptr!=NULL)
 {
     printf("element %d\n",ptr->data);
     ptr=ptr->next;
 }
}
int main()
{ 
    struct  node *head;
     struct  node *second;
      struct  node *third;
      struct node *fourth;
      struct node *fifth;
      //allocate memory of node in heap
    head = (struct node*) malloc(sizeof(struct node));
    second = (struct node*) malloc(sizeof(struct node));
    third = (struct node*) malloc(sizeof(struct node));
  fourth = (struct node*) malloc(sizeof(struct node));
    fifth = (struct node*) malloc(sizeof(struct node));
    //linke 1st and 2nd node
    head->data=7;
    head->next=second;
    //2nd and 3rd node
    second->data=11;
    second->next=third;
    //link 3rdand 4th
    third->data=68;
    third->next=fourth;
    //link 4th to 5th
    fourth->data=86;
    fourth->next=fifth;
    //terminate
    fifth->data=102;
    fifth->next=NULL;




    linkedlisttransversal(head);
    head=insertatfirst(head,54);
     linkedlisttransversal(head);

    return 0;
}







