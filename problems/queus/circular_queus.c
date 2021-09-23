///here we have to implement queus with array we have use isfull,isemmpty,deques,enqueu function

#include<stdio.h>
#include<stdlib.h>

struct circularqueue
{
    int size;
    int f;
    int r;
    int * arr;
};
int isempty(struct circularqueue*q){ 
    if(q->r==q->f)
    {
        return 1;
    }
    return 0;
}
int isfull(struct circularqueue*q){ 
    if(((q->r+1)%q->size) ==q->f ) //herer is circular queue when for checkng full when q ka rare +1 krte h aur tb %q k hi fir agr last element ho to first pr ajata h 
    {
        return 1;
    }
    return 0;
}

void enqueue(struct circularqueue*q , int val) 
{  
    if(isfull(q))//check whether is full queue
    {
    printf("this queue is full");}
    else{
        q->r =(q->r+1)%q->size;
        q->arr[q->r]=val;
    }

}
int dequeue1(struct circularqueue*q)
 {
     int a=-1;
     if(isempty(q)){
          printf("queue is empty");
     }
     else{
         q->f = (q->f+1)%q->size ;
         a=q->arr[q->f];
     }
     return a;
 }
int main()
{ 
    struct circularqueue q;
    q.size=4;
    q.r=q.f=0; //here is diffrence from linear queue as f=r=0 because when its is -1 our element with overlap each other 
    q.arr = (int*) malloc(q.size*sizeof(int));
    enqueue(&q,12);
    enqueue(&q,15);
    enqueue(&q,52);
    printf("dequeing element %d\n", dequeue1(&q));
    printf("dequeing element %d\n", dequeue1(&q));
    printf("dequeing element %d\n", dequeue1(&q));
    if(isempty(&q))
    {
       printf("queue is empty");
    }
     
    if(isfull(&q))
    {
        printf("queue is full");
    }
   
    
    return 0;}


