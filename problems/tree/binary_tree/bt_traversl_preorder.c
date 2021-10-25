#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>

struct node
// here we have to build struct
{
    int data;
    struct node *left;
    struct node *right;
};

struct node *createnode(int data)
// here we have create a node kthat has been store meomory in heap with malloc
{
    struct node *n;
    n = (struct node *)malloc(sizeof(struct node));
    n->data = data;
    n->left = NULL;
    n->right = NULL;
    return n;
}

void preorder(struct node * root)
{ 
    if (root!=NULL)
     {
         printf("%d",root->data);
         preorder(root->left);
         preorder(root->right);
    }

    // here we have to print 
         /*  2
          / \
          4   11
          /\   /\
        14 16  18 20  */ 
}
int main()
{
    /*struct node * p;
    p = (struct node *)malloc(sizeof(struct node));
    p->data = 2;
    p->left =NULL;
    p->right = NULL;



    struct node * p1;
    p1 = (struct node *)malloc(sizeof(struct node));
    p1->data = 10;
    p1->left =NULL;
    p1->right = NULL;


    struct node * p2;
    p2 = (struct node *)malloc(sizeof(struct node));
    p2->data = 12;
    p2->left =NULL;
    p2->right = NULL;



    p->left =p1;
    p->right = p2;*/

    //    constructiong root node using function

    struct node *p = createnode(2);
    struct node *p1 = createnode(4);
    struct node *p2 = createnode(11);
    struct node *p3 = createnode(14);
    struct node *p4 = createnode(16);
    struct node *p5 = createnode(18);
    struct node *p6 = createnode(20);

    // connecting the nodes
    p->left = p1;
    p->right = p2;
    p1->left = p3;
    p1->right = p4;
    p2->left = p5;
    p2->right = p6;
    p3->left =NULL;
    preorder(p);

    return 0;
}