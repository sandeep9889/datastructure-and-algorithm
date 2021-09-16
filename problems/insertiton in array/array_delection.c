#include<stdio.h>
//transversal//

void display(int arr[], int n)
{ 
    int i;
for (int i=0; i<n; i++)
   { printf("%d",arr[i]);}
   printf("\n");
     

}
void inddeletion ( int arr[],int size, int index){
    int i;
    
    for(i=index;i<size-1; i++)
    {
        arr[i]=arr[i+1];
    }
   
    
}

int main()
{  
    int arr[100]={7,8,12,27,88};
    display(arr,5);
    int element=45, size=5,index=3;
    inddeletion(arr,size,index);
    size-=1;
    display(arr,4);

    return 0;
}
