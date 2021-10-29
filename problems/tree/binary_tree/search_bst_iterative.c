#include<stdio.h>
#include<stdlib.h>
#include<malloc.h>


struct node{
     int data;
     struct node *left;
     struct node *right;
};

struct node *search_bstIter(struct node *root ,int key) {
while(root!=NULL){    
    if(key == root->data) {
        return root;
    }
    else if(key<root->data) {
        root = root ->left;
    }
    else  {
        root = root ->right;
    }
}
return NULL;
}

struct node *createnode(int data)
 {
     struct node *n;
     n  =(struct node *)malloc(sizeof(struct node));
    n->data=data;
    n->left=NULL;
    n->right=NULL;

 }




int main()
 {
struct node *p = createnode(50);
    struct node *p1 = createnode(40);
    struct node *p2 = createnode(60);
    struct node *p3 = createnode(20);
    struct node *p4 = createnode(45);
    struct node *p5 = createnode(55);
    struct node *p6 = createnode(70);

    p->left=p1;
    p->right=p2;
    p1->left=p3;
    p1->right=p4;
    p2->right=p6;
    p2->left=p5;


    struct node* n = search_bstIter(p,45);
    if (n!=NULL){
    printf("found %d",n->data);
    }
else { 
    printf("element not found");
}



 }