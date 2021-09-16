#include<stdio.h>
#include<stdlib.h>
int i,n;
struct myarray
{
  int total_size;
  int used_size;
  int*ptr;   
};
void createarray(struct myarray*a, int tsize, int usize)
{
     (*a).total_size = tsize;
     (*a).used_size = usize;
    (*a).ptr = (int*)malloc(tsize*sizeof(int));
     
}
void show (struct myarray a)
{
     for(i=0;i<(*a).used_size;i++)
     {
          printf("%d\n",((*a).ptr)[i]);
     }
}
void setval (struct myarray)
{
     for(i=0;i<(*a).used_size;i++)
     {    
          printf("ENTER ELEMENT %d",i);
          scanf("%d",&n);
          (*a).ptr[i]=n; 
     }
}
int main()
{
     struct myarray marks;
     createarray(&marks,100,20);
       printf("we are runing setval");
       setval(&marks);
     printf("we are runing show");
     show(&marks);
   
     return 0;

}