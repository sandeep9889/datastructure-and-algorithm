#include<stdio.h>
#include<stdlib.h>

struct node{ 
    int data;
    struct node *next;
};
int isempty(struct node* top)
{ 
if (top==NULL)
{
    return 1;
}
else{ 
    return 0;
}
}
isfull(struct node*top)
{ 
    struct node* p = (struct node*)malloc(sizeof(struct node));
    if(top==NULL)
     {
         return 1;
     }
    else{ 
        return 0;
    }
    
}
struct node * push(struct node* top, int x)
{
if(isfull)
 {
     printf("stack overflow");
 }
 else {
     struct node *n= (struct node*)malloc(sizeof(struct node));
     n->data=x;
     n->next=top;
     top=n;
     return top;
 }

}
int main()
{ 
    struct node * top = 56;
    top=push(top,78);
}