/*wap to delete all occurences of a specific element*/
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
    int a2[]={},del;            

    printf("entre the element to be deleted:");
    scanf("%d",&del);

    int newSize = 0 ;
    
    for(int i = 0 ; i <n ; i++)
    {
        if(a[i] != del)
        {
           a2[newSize] = a[i] ;
           newSize++ ;
        }
    }
    for(int i = 0 ; i < newSize ; i++)
    {
        printf("%d\n",a2[i]);
    }
}