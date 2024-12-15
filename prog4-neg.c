/*print all the negative elements from 1d array*/
#include<stdio.h>
void main(){
    int n,i;

    printf("enter array size:"); 
    scanf("%d",&n);

    int a[n];
    printf("enter array elements\n");
    for(i=0 ; i<n ; i++){
        printf("a[%d]:",i);
        scanf("\n%d",&a[i]);
    }
    printf("negative elements are:");
    for(i=0;i<n;i++){
     if(a[i]<0){
        printf("%d ",a[i]);
    }
   }
}