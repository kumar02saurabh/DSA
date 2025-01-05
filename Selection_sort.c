#include<stdio.h>
int main(){
    int n;
    printf("Enter the array size:");
    scanf("%d",&n);
    int arr[n];
    printf("Enter the array elements:");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for (int i=0; i<n-1; i++){
        int small_index = i;
        for(int j=i+1; j<n; j++){
            // Ascending Order
            if(arr[j] < arr[small_index]){ // For Decending order { if(arr[j] > arr[small_index])}
                small_index = j;
            }
            
        }
        int temp = arr[i];
        arr[i] = arr[small_index];
        arr[small_index] = temp;
    }
printf("Sorted Array are:");
for(int i=0; i<n;i++){
    printf("%d ",arr[i]);
}

printf("\n");
return 0;
}