#include<stdio.h>
#include<conio.h>
int main()
 {
     int a,b,c;
     printf("enter any three no");
     scanf("%d %d %d",&a,&b,&c);
     printf("checking which no is greater btw three\n");
     if(a>b && a>c)
     {
         printf(" a is bigger\n");
     }
     if(b>a &&b>c)
     {
         printf("b is bigger then other\n");

     }
     if(c>a && c>b) {
         printf("c is bigger then other\n");
     }
 }