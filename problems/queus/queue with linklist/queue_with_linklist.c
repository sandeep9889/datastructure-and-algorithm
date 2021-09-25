#include <stdio.h>
#include <stdlib.h>

struct node *f = NULL;
struct node *r = NULL;
struct node
{
    int data;
    struct node *next;
};

void linkedlisttransversal(struct node *ptr) //for traversing
{
    printf("traversing the queue\n");
    while (ptr != NULL)
    {
        printf("element %d\n", ptr->data);
        ptr = ptr->next;
    }
}

int dequeue()
{ 
    int val=-1;
    struct node *ptr = f;

    if (f == NULL)
        printf("queue is empty\n");
    else
    {
        
        f = f->next;
        val =ptr->data;
        free(ptr);
        
    }
    return val;
}

void enqueue(int val)
{
    struct node *n = (struct node *)malloc(sizeof(struct node));
    if (n == NULL)
        printf("queue is full\n");
    else
    {
        n->data = val;
        n->next = NULL;
        if (f == NULL) //it is a special condition for making a node because if f= null it means queue is empty then we have put both f and r is equLL TO N
        {
            f = r = n;
        }
        else
        {
            r->next = n;
            r = n;
        }
    }
}

int main()
{

    linkedlisttransversal(f);
    printf("dequeing element %d\n", dequeue());
    
    enqueue(34);
    enqueue(44);
    enqueue(54);
    printf("dequeing element %d\n", dequeue());
    enqueue(14);
    linkedlisttransversal(f);

    return 0;
}