#include<stdio.h>
int main(){
    int n,i,j,total_Pairs=0;
    int x;
    //Array size
    printf("Enter the no of array size:");
    scanf("%d",&n);

    //Ask user to which pair they want to check 
    printf("Enter the no to check Pairs :");
    scanf("%d",&x);



    int arr[n]; //Array declaration 

    //array elements
    printf("Enter the elements of array:");
    for(i=0; i<n;i++){
         scanf("%d",&arr[i]);
    }

    for(i=0; i<n; i++)
    {
        for(j=i+1;j<n; j++)
        {
            if(arr[i]+arr[j]==x)
            {
                total_Pairs++;
                printf("(%d,%d)\n",arr[i],arr[j]);
            }
        }
    }
     printf("%d",total_Pairs);
    return 0;

}