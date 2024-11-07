#include<stdio.h>
int main(){
    int i,n,prod=1;
    //Ask user to put array size
    printf("Enter the array size:");
    scanf("%d",&n);

    int arr[n];// array declaration

    //enter array elemnts 
    for(i=0; i<=n-1; i++)
    {
        scanf("%d",&arr[i]);
    }

    //printing 
    for(i=0;i<=n-1;i++)
    {
        prod=prod*arr[i];
    }
    printf("%d",prod);

    return 0;
}