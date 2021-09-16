#include<stdio.h>
#include<stdlib.h>

struct stack{
     int size;
     int top;
     int *arr;
};

int isfull(struct  stack *ptr)
{
     int size;
  if(ptr->top==size-1)
  {
       return 1;
  }
  else
  {
       printf("non full");
  }
}
int empty(struct stack *ptr)
 {
     if(ptr->top==-1)
     {
          printf("stack is empty");

     }
     else {
         printf("stack is non empty");
     }
 }
int main()
 { int val;
   
    struct stack *s= (struct stack *) malloc(sizeof(struct stack));
    s->size=10;
    s->top=-1;
    s->arr=(int *) malloc(s->size *sizeof(int));
    if(isfull)
    { 
        printf("stack overflow");
    }
    else {s->top++;
    s->arr[s->top]=val;

    }

 }