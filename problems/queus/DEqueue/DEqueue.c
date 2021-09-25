//DEqueue is a queue which can cot accept fifo principle it can be any thing like rare in rare out and first in first out 

//here two types of dequeue 
// 1) ristricted DEqueue insertion = meaning cannot be insert fron front
// 2) ristricted DEqueue deletion = meaning cannot be deleted from rare
#include<stdio.h>
#include<stdlib.h>

struct queue
{
    int size;
    int f;
    int r;
    int * arr;
};
int isempty(struct queue*q){ 
    if(q->r==q->f)
    {
        return 1;
    }
    return 0;
}
int isfull(struct queue*q){ 
    if(q->r==q->size-1)
    {
        return 1;
    }
    return 0;
}

void enqueue(struct queue*q , int val) 
{  
    if(isfull(q))//check whether is full queue
    {
    printf("this queue is full");}
    else{
        q->r++;
        q->arr[q->r]=val;
    }

}
void enqueuef(struct queue*q , int val) 
{  
    if(isfull(q))//check whether is full queue
    {
    printf("this queue is full");}
    else{
        q->f;
        q->arr[q->f]=val;
    }

}
int dequeue(struct queue*q)
 {
     int a=-1;
     if(isempty(q)){
          printf("queue is empty");
     }
     else{
         q->f++;
         a=q->arr[q->f];
     }
     return a;
 }
 int dequeueR(struct queue*q)
 {
     int a=-1;
     if(isempty(q)){
          printf("queue is empty");
     }
     else{
         q->r;
         a=q->arr[q->r];
     }
     return a;
 }
int main()
{ 
    struct queue q;
    q.size=100;
    q.r=q.f=-1;
    q.arr = (int*) malloc(q.size*sizeof(int));
    enqueue(&q,12);
    enqueue(&q,24);
     enqueuef(&q,36);
    enqueue(&q,48);
    printf("dequeing element %d\n", dequeue(&q));
    printf("dequeing element %d\n", dequeueR(&q));
    
    if(isempty(&q))
    {
       printf("queue is empty");
    }
     
    if(isfull(&q))
    {
        printf("queue is full");
    }
   
    
    return 0;}


