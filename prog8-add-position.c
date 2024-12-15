/*wap to add a value at a specific index*/
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

    int index;

    printf("enter index the element to be inserted at:");
    scanf("%d",&index);

    for(int i = n ; i >= index ; i--)
    {
        a[i+1] = a[i];
    }
    printf("enter the element to be inserted:");
    scanf("%d",&a[index]);
  
    for(int j = 0 ; j < n+1 ; j++)
    {
        printf("%d ",a[j]);
    }
}