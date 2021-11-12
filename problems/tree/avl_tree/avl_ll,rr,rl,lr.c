#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
struct node

{
    int key;
    struct node *left;
    struct node *right;
    int height;
};
int getheight(struct node *n)
{
    if (n == NULL)
        return 0;
    return n->height;
}

struct node *createnode(int key)
{
    struct node *node = (struct node *)malloc(sizeof(struct node));
    node->left = NULL;
    node->right = NULL;
    node->key = key;
    node->height = 1;

    return node;
}

int getbalanacefactor(struct node *n)
{
    if (n == NULL)
    {
        return 0;
    }
    return getheight(n->left) - getheight(n->right);
}

struct node *rightrotate(struct node *y)
{
    struct node *x = y->left;
    struct node *t2 = x->right;

    x->right = y;
    y->left = t2;

    y->height = max(getheight(y->right), getheight(y->left)) + 1;
    x->height = max(getheight(x->right), getheight(x->left)) + 1;

    return x;
}

struct node *leftrotate(struct node *x)
{
    struct node *y = x->right;
    struct node *t2 = y->left;

    x->right = t2;
    y->left = x;

    y->height = max(getheight(y->right), getheight(y->left)) + 1;
    x->height = max(getheight(x->right), getheight(x->left)) + 1;

    return y;
}

struct node *insert(struct node *node, int key)
{
    if (node == NULL)
        return (createnode(key));

    if (key < node->key)
        node->left = insert(node->left, key);

    else if (key > node->key)
        node->right = insert(node->right, key);

    node->height = 1 + max(getheight(node->left), getheight(node->right));
    int bf = getbalanacefactor(node);
    // left left case
    if (bf > 1 && key < node->left->key)
    {
        rightrotate(node);
    }
    // right right  case
    if (bf < -1 && key > node->right->key)
    {
        leftrotate(node);
    }
    // left right  case

    if(bf>1 && key > node->left->key)
    {  node->left =leftrotate(node->left);
       rightrotate(node); 
    }

    // right left case 

     if(bf<-1 && key < node->right->key)
    {  node->right =rightrotate(node->right);
       leftrotate(node); 
    }

    return node;
}

//          y                               x
//        /   \      right rotation       /   \
//       x     t3    --------------->   t1     y
//     /  \            left rotation          / \
//    t1   t2        <----------------        t2  t3

int main()
{


    
}