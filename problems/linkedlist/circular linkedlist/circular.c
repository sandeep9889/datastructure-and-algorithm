


#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node * next;
};
struct node* insertatfirst(struct node *head, int data)
{ 
struct node *ptr= (struct node *)malloc(sizeof(struct node));
ptr->data=data;
struct node*p=head->next;
while(p->next!=head)
{ 
    p=p->next;
}
p->next=ptr;
ptr->next=head;
head=ptr;
return head;

}
void linkedlisttransversal(struct node* head)
{ 
    struct node *ptr=head->next;
 while(ptr!=head)
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
    head->data=4;
    head->next=second;
    //2nd and 3rd node
    second->data=3;
    second->next=third;
    //link 3rdand 4th
    third->data=6;
    third->next=fourth;
    //link 4th to 5th
    fourth->data=1;
    fourth->next=head;
    




    linkedlisttransversal(head);
    head= insertatfirst(head,54);
     linkedlisttransversal(head);
    return 0;
}