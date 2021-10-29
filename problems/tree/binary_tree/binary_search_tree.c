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

void inorder(struct node * root)
{ 
// inorder is the type of traversing

    if (root!=NULL)
     {
         inorder(root->left);
         printf("\t%d",root->data);
         inorder(root->right);
    }

    // here we have to print 
         /*  6
          / \
          4   7
          /\   
        3   5   
        HOW IT WORKING?

         inorder(root->left);
        firstly 2 was gone then to left so  2 ka left m 4 then wapis se 4  ka left 14 fir 14 ka left is null then uspe null ane fir kuch value hi nahui h  k baad
         printf("\t%d",root->data);
        data print hojayega data m 14  fir fir right 14 ka bhi null h to data print hojayega root ka 4fir 4 ka right h 16 pr 16 ka bhi left and right was null to 
        data print hoga 16 fir 2 print hoga fir 2 ka right m jakar same vaisa hi hoga 18 fir 11  fir 20 hence this is asnwer   */ 

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

    struct node *p = createnode(6);
    struct node *p1 = createnode(4);
    struct node *p2 = createnode(7);
    struct node *p3 = createnode(3);
    struct node *p4 = createnode(5);
    
    // connecting the nodes
    p->left = p1;
    p->right = p2;
    p1->left = p3;
    p1->right = p4;
    
    p3->left =NULL;
    inorder(p);

    return 0;
}