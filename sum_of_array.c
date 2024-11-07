#include<stdio.h>
int main()
{

    int n,i,sum=0;

    //Enter array size
    printf("Enter the size of array:");
    scanf("%d",&n);

    int arr[n];  //array declaration

    //Enter Array elements 
    for(i=0; i<=n-1; i++)
    {
        scanf("%d",&arr[i]);
    }
    //printing 
    for(i=0; i<=n-1; i++)
    {
        sum=sum+arr[i];
       
    }
     printf("%d ",sum);



    return 0;

}