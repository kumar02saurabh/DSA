#include<stdio.h>
int main(){
    int i,j,k,n,x;
    int total_Triplets=0;
    //Array size
    printf("Enter the Number of array size:");
    scanf("%d",&n);

    int arr[n]; //Array declaration

    //Ask User to  value which they want to check triplet
    printf("Enter the Number which you want to check:");
    scanf("%d",&x);

    //Array elements
    printf("Enter the elements of array:");
    for(i=0; i<n;i++){
        scanf("%d",&arr[i]);
    }

    for(i=0; i<n; i++){
        for(j=i+1; j<n; j++){
            for(k=j+1; k<n; k++){
                if(arr[i]+arr[j]+arr[k]==x)
                total_Triplets++;
                printf("(%d,%d,%d)\n",arr[i],arr[j],arr[k]);
                }
            }
        }
        printf("%d",total_Triplets);
        return 0;
}

