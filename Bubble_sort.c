#include<stdio.h>
int main(){
    int n;
    printf("Enter The array size:");
    scanf("%d",&n);
    int arr[n];
    printf("Enter The Arry Elements:");
    for(int i=0; i<n;i++){
        scanf("%d",&arr[i]);
    }
    // Bubble sort Logic in Ascending order
    for (int i=0; i<n-1;i++){
        for (int j=0;j<n-1-i;j++){
            if (arr[j]>arr[j+1]){  // for Decending { if (arr[j]<arr[j+1]) }
                int temp = arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
    printf("Sorted  array are:");
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    printf("\n");
    return 0;
    
}