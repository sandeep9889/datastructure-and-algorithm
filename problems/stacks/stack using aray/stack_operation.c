#include<stdio.h>
#include<stdlib.h>
struct stack{
int size;
int top; 
int * arr;
};
int isempty(struct stack * ptr)
{ 
if(ptr->top==-1) {
    return 1;

}
else
{ 
    return 0;
}
}
int isfull(struct stack * ptr)
{
if(ptr->top==ptr->size-1) {
    return 1;

}
else
{ 
    return 0;
}
}
void push(struct stack*ptr, int val )
{ 
    if(isfull(ptr))
    {
         printf("stack overflow\n");
    }
    else{ 
        ptr->top++;
        ptr->arr[ptr->top]=val;
    }
}
int pop(struct stack*ptr)
{ 
    if(isempty(ptr))
    {
         printf("\nstack underflow! cannot pop from the stack");
         return -1;
         
    }
    else{ 
        int val= ptr->arr[ptr->top];
        ptr->top--;
        return val;
        
    }
}

int main()
{ 
    struct stack *sp = (struct stack *) malloc(sizeof(struct stack));
    sp->size=10;
    sp->top=-1;
    sp->arr=(int *)malloc(sp->size * sizeof(int));
    printf("stack has been crteated succesfully\n");
    printf("before pushing full - %d\n", isfull(sp));
       printf("before pushing empty - %d\n", isempty(sp));

       push(sp,25);
       push(sp,62);
       push(sp,58);
       push(sp,66);
       push(sp,45);
       push(sp,53);
       push(sp,52);
       push(sp,54);
       push(sp,55);
       push(sp,46);
       push(sp,56);// here 56 is in overflow thats why it csan not be in stack
       
       printf("after pushing full - %d\n", isfull(sp));
       printf("after pushing empty - %d\n", isempty(sp));
       printf("popped %d from the stack\n", pop(sp));
       pop(sp);
 return 0;
}