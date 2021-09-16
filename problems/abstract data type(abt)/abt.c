#include<stdio.h>
struct mystudent

{char name[30];
 int age;
};
void main()
{
struct mystudent s;
int age;
gets(s.name);
scanf("%d",&s.age);
printf("age of student=%d",s.age);
puts(s.name);   

}