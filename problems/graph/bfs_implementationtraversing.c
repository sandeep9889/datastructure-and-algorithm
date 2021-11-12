///here we have to implement queus with array we have use isfull,isemmpty,deques,enqueu function

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
int dequeue1(struct queue*q)
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
int main()
{ 
    struct queue q;
    q.size=100;
    q.r=q.f=0;
    q.arr = (int*) malloc(q.size*sizeof(int));
   // BFS IMPLEMENTATION
   int u;
   int i=0;
   int visited[7]= {0,0,0,0,0,0,0};
   int a[7][7] = {
   {0,1,1,1,0,0,0},
   {1,0,0,1,0,0,0},
   {1,1,0,1,1,0,0},
   {1,0,1,0,1,0,0},
   {0,0,1,1,0,1,1},
   {0,0,0,0,1,0,0},
   {0,0,0,0,1,0,0},
    

   };
printf("%d", i);
visited[i] = 1;
enqueue(&q,i); //enqueue i for explanation
 while(!isempty(&q)){
     int node = dequeue(&q);
 } 
    return 0;}


