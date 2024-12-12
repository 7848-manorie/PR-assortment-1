/*calculate the average of 1d array*/
#include<stdio.h>
void main(){
    int n,i;

    printf("enter array size:"); 
    scanf("%d",&n);

    int a[n];
    float avg,sum=0;

    printf("enter array elements\n");
    for(i=0 ; i<n ; i++){
        printf("a[%d]:",i);
        scanf("\n%d",&a[i]);
        sum=sum+a[i];
        avg=sum/n;
    }
    printf("avg of array is:%.2f",avg);
}