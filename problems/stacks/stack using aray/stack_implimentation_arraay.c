#include<stdio.h>
#include<stdlib.h>
struct stack{ 
    int size;
    int top;
    int *arr;
};


int isempty(struct stack*ptr)
{ 
    if(ptr->top=-1)
    {
         return 1;
    }
    else{
         return 0;
    }
}
int isfull(struct stack *ptr)
{ 
    if(ptr->top==ptr->size-1)
    { 
        return 1;
    }
    else{ 
        return 0;
    }

}
//s->arr[0]=8;
//s->top++;
int main()
 {
    // struct stack  s;
    // s.size=80;
    // s.top=-1;
    // s.arr= (int*)(s.size * sizeof(int));

    //instead of it wwe can use pointer
    struct stack  * s;
     s->size=80;
     s->top=-1;
     s->arr= (int*)(s->size * sizeof(int));
     //cheak stack is empty
     if(isempty(s))
     {
         printf("stack is empty");

     }
     else
     {
            printf("stack is notempty");
     }
    return 0;
 }