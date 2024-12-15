/*wap to add a value at the end of array*/
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

    int length=(sizeof(a)/sizeof(a[0]));
    int add;

    printf("enter the number to be added:");
    scanf("%d",&add);

    a[length]=add;

    for(int i=0; i< length+1 ; i++){
        printf("%d ",a[i]);
    }
}