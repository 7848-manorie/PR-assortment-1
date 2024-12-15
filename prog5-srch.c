/*wap to search an element and its index position from 1d array*/
#include<stdio.h>
void main(){
    int n,i;

    printf("enter array size:"); 
    scanf("%d",&n);

    int a[n],pos,search;
    printf("enter array elements\n");
    for(i=0 ; i<n ; i++){
        printf("a[%d]:",i);
        scanf("\n%d",&a[i]);
    }
    for(int i=0;i<n;i++){
        printf("\n%d",a[i]);
    }
    printf("\nenter the element to be found:");
    scanf("\n%d",&search);

    printf("element found at array index:");
    for(int i=0;i<n;i++){
        if(a[i]==search){
           pos=i;
           break;
        }
    }
    if(pos=i){
        printf("element found at array index:%d",i);
    }
    else{
        printf("element not found");
    } 
}