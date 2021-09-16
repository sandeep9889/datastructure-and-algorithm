#include<stdio.h>
int linearsearch(int arr[], int size, int element){
    int i;
    for(i=0;i<size;i++)
    {
    if(arr[i]==element)
    return i;
   
}
return -1;
 }
 int binarysearch(int arr[],int size,int element)
 {int mid,low,high;
 low=0;
 high=size-1;
 while(low<=high)
 //keep searching even low<=high//
 
 {
     
     mid=(low+high)/2;
     if(arr[mid]==element){
     return mid;}
     if(arr[mid]<element)
     {
         low=mid+1;
        
     }
     else{
         high=mid-1;
        
     }
 }
 return -1;
 }
 
int main()
{ 
    //unsorted array for linear search
     //int arr[]={1,2,3,4,5,6,7,75,42,15,13,52,61,22,156};

 //int size=sizeof(arr)/sizeof(int);
  //sorted array for binary search
  int arr[]={1,2,3,4,5,6,7,75,42,15,13,52,61,22,156};

 int size=sizeof(arr)/sizeof(int);
 int element=52;
int searchindex=binarysearch(arr,size,element);
 

 printf("the element %d is and its index%d",element, searchindex);
 return 0;

}