#include<stdio.h>
//transversal//

void display(int arr[], int n)
{ 
    int i;
for (int i=0; i<n; i++)
   { printf("%d",arr[i]);}
   printf("\n");
     

}
int indinserstion ( int arr[],int size,int element,int capacity , int index){
    int i;
    if(size>=capacity)
    {
        return -1;
    }
    for(i=size-1;i>index; i--)
    {
        arr[i+1]=arr[i];
    }
    arr[index]=element;
    return 1;
}

int main()
{  
    int arr[100]={7,8,12,27,88};
    display(arr,4);
    int element=45, size=5,index=3;
    indinserstion(arr,size,element,100,index);
    size+=1;
    display(arr,5);

    return 0;
}