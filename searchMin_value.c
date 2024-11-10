#include<stdio.h>
int main(){
    int n;

    //Enter array size
    printf("Enter The Array size:");
    scanf("%d",&n);

    int arr[n]; //Array declaration

    // Enter the array elements 
    printf("Enter the Array elements:");
    for(int i=0; i<=n-1; i++){
        scanf("%d",&arr[i]);
    }

    int Min=arr[0]; // Initailize Min value at aar[0]

    for(int i=0; i<=n-1; i++){
        if (Min>arr[i]){ // comapre min valuse in arr[i]
            Min=arr[i]; // Store min value 
        }
    }
    printf("%d",Min);

    return 0;

}