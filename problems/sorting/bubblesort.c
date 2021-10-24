#include<stdio.h>
#include<stdlib.h>
 int i;
printarr(A,n)
 {

  for (i=0;i<n;i++)
  { 
    printf("%d", A[i]);
  } 
 }

int main()
{ 
    int A[] = {2,56,65,23,54,84,25};
    
    int n = 7;
    printarr(A,n);
    return 0;
     
}