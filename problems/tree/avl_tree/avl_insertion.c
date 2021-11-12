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

int  max (int a,int b){
     return a>b?a:b; 
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
        returnrightrotate(node);
    }
    // right right  case
    if (bf < -1 && key > node->right->key)
    {
        returnleftrotate(node);
    }
    // left right  case

    if(bf>1 && key > node->left->key)
    {  node->left =leftrotate(node->left);
       returnrightrotate(node); 
    }

    // right left case 

     if(bf<-1 && key < node->right->key)
    {  node->right =rightrotate(node->right);
       returnleftrotate(node); 
    }

    return node;
}
void preorder(struct node * root)
{ 
    if (root!=NULL)
     {
         printf("%d",root->key);
         preorder(root->left);
         preorder(root->right);
    }
}

//          y                               x
//        /   \      right rotation       /   \
//       x     t3    --------------->   t1     y
//     /  \            left rotation          / \
//    t1   t2        <----------------        t2  t3

int main()
{
    struct node *root = NULL;
    root = insert(root,1);
    root = insert(root,2);
    root = insert(root,4);
    root = insert(root,5);
    root = insert(root,6);
    root = insert(root,3);
preorder(root);
    

return 0;


}