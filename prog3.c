/*calculate the addition of two 1d array by storing it in another array*/
#include<stdio.h>
void main(){
    int n,i;

    printf("enter array size:"); 
    scanf("%d",&n);

    int a[n],b[n];

    printf("enter array A's elements\n");
    for(i=0 ; i<n ; i++){
        printf("a[%d]:",i);
        scanf("\n%d",&a[i]);
    }
    printf("enter array B's elements\n");
    for(i=0 ; i<n ; i++){
        printf("b[%d]:",i);
        scanf("\n%d",&b[i]);
    }
    printf("array C is:");

    int c[n];
    for(i=0; i<n ; i++){
        c[i]=a[i]+b[i];
        printf("%d ",c[i]);
    }
}