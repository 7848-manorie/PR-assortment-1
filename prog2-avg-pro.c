/*calculate the average and product of 1d array*/
#include<stdio.h>
void main(){
    int n,i;

    printf("enter array size:"); 
    scanf("%d",&n);

    int a[n];
    float avg,sum=0,pro=1;

    printf("enter array elements\n");
    for(i=0 ; i<n ; i++){
        printf("a[%d]:",i);
        scanf("\n%d",&a[i]);
        sum=sum+a[i];
        avg=sum/n;
        pro=pro*a[i];
    }
    printf("avg of array is:%.2f",avg);
    printf("\nproduct of array is:%.2f",pro);
}