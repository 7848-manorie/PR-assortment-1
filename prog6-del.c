/*wap to delete an index and its value from 1d array*/
#include<stdio.h>
void main(){
    int n;

    printf("enter array size:"); 
    scanf("%d",&n);

    int a[n];
    printf("enter array elements\n");
    for(int i=0 ; i<n ; i++){
        printf("a[%d]:",i);
        scanf("\n%d",&a[i]);
    }
  
    for(int i=0 ; i<n ; i++)
    {
        printf("\n%d ",a[i]);
    }
    
    int index ;
    printf("\nEnter index whose value you want to remove:");
    scanf("%d",&index);
    
    for(int i =index ; i<n ; i++)
    {
        a[i] = a[i+1];
    }
    printf("array after deletion:");
    for(int i =0 ; i<n ; i++)
    {
       printf("%d ",a[i]);
    }
}