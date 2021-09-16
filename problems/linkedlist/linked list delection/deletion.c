#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node * next;
};
void linkedlisttransversal(struct node*ptr)
{ 
 while(ptr!=NULL)
 {
     printf("element %d\n",ptr->data);
     ptr=ptr->next;
 }
}
// case 1delete at first
struct node * deletefirst(struct node * head) //for deleting first element//
{  
  struct node * ptr=head;
  head=head->next;
  free(ptr);
  return head;


}
//case2 delete at any index
struct node * deleteatindex(struct node *head, int index) //for deleting index element//
{  
  struct node * p=head;
  struct node* q=head->next;
  for (int i = 0; i < index-1; i++)
  {
    p=p->next;
    q=q->next;
    
  }
  p->next=q->next;
  free(q);
  
  return head;


}
//case3 delete at end
struct node * deleteatend(struct node *head) //for deleting at end//
{  
  struct node * p=head;
  struct node* q=head->next;
  while(q->next!=NULL)   
  {
   p=p->next;

    q=q->next;
    
  }
  p->next=NULL;
  free(q);
  
  return head;


}
//case4 delete when no value is given
struct node * deleteatval(struct node *head, int value) //for deleting index element//
{  
  struct node * p=head;
  struct node* q=head->next;
  while(q->data!=value && q->next!=NULL)
  {
    p=p->next;
    q=q->next;
    
  }
  if(q->data==value)
  {
     p->next=q->next;
     free(q);
  }
  
  return head;


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



   printf("linked list before dilition");
    linkedlisttransversal(head);
    //head= deletefirst(head); //deleting first element
    //head= deleteatindex(head,2);//deleting index element
    //deleteatend(head);//delete at end
    deleteatval(head,86);

    printf("linked list after delition");
    linkedlisttransversal(head);

    return 0;
}