/*wap to print max and min values from 1d array*/
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

    int max=a[0],min=a[0];

    for(int i=0;i<n;i++){
        if(max<a[i]){
            max=a[i];
        }
    }
     for(int i=0;i<n;i++){
        if(min>a[i]){
            min=a[i];
        }
    }
    printf("maximum element is:%d",max);
    printf("\nminimum element is:%d",min);
}