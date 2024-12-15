/*calculate the length of an array*/
#include<stdio.h>
void main(){
    // int n,i;

    // printf("enter array size:"); 
    // scanf("%d",&n);

    // int a[n];
    // printf("enter array elements\n");
    // for(i=0 ; i<n ; i++){
    //     printf("a[%d]:",i);
    //     scanf("\n%d",&a[i]);
    // }
    int a[]={1,2,3,4,5,6,7,10,11};

    int length=(sizeof(a)/sizeof(a[0]));

    printf("length of array is:%d",length);
}