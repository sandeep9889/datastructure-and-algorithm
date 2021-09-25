#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};
struct node *insertatfirst(struct node *head, int data)
{
    struct node *ptr = (struct node *)malloc(sizeof(struct node));
    ptr->next = head;
    ptr->data = data;
    return ptr;
}
struct node *insertatbtw(struct node *head, int data, int index)
{
    struct node *ptr = (struct node *)malloc(sizeof(struct node));
    struct node *p = head;
    int i = 0;
    while (i != index - 1)
    {
        p = p->next;
        i++;
    }
    ptr->data = 76;
    ptr->next = p->next;
    p->next = ptr;
    return head;
}
struct node *insertatend(struct node *head, int data)
{
    struct node *ptr = (struct node *)malloc(sizeof(struct node));
    struct node *p = head;

    while (p->next != NULL)
    {
        p = p->next;
    }
    ptr->data = 155;
    ptr->next = NULL;
    p->next = ptr;
    return head;
}
void linkedlisttransversal(struct node *ptr)
{
    while (ptr != NULL)
    {
        printf("element %d\n", ptr->data);
        ptr = ptr->next;
    }
}
int main()
{
    struct node *head;
    struct node *second;
    struct node *third;
    struct node *fourth;
    struct node *fifth;
    //allocate memory of node in heap
    head = (struct node *)malloc(sizeof(struct node));
    second = (struct node *)malloc(sizeof(struct node));
    third = (struct node *)malloc(sizeof(struct node));
    fourth = (struct node *)malloc(sizeof(struct node));
    fifth = (struct node *)malloc(sizeof(struct node));
    //linke 1st and 2nd node
    head->data = 7;
    head->next = second;
    //2nd and 3rd node
    second->data = 11;
    second->next = third;
    //link 3rdand 4th
    third->data = 68;
    third->next = fourth;
    //link 4th to 5th
    fourth->data = 86;
    fourth->next = fifth;
    //terminate
    fifth->data = 102;
    fifth->next = NULL;

    //linkedlisttransversal(head);
    //head=insertatfirst(head,54);
    //linkedlisttransversal(head);
    //linkedlisttransversal(head);
    //head=insertatbtw(head,76, 1);
    printf("\nlinked list before insertion");
    linkedlisttransversal(head);
    printf("\nlinked list after insertion");
    head = insertatend(head, 155);
    linkedlisttransversal(head);

    return 0;
}
