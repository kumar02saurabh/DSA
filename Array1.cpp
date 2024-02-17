#include<iostream>
using namespace std;
int main(){
    int arr[5]={1,2,3,4,5};
    for(int i=0;i<5;i++)
    cout<<arr[i]<<" ";
    return 0;
}


#include<iostream>
using namespace std;
int main(){
    int arr[]={1,2,3,4,5,6};
    for(int i=0;i<6;i++)
    cout<<arr[i]<<" ";
    return 0;
}


// #include<iostream>
// using namespace std;
// int main(){
//     int arr[5]={1,2};
//     for(int i=0;i<5;i++)
//     cout<<arr[i]<<" ";
//     return 0;
// }



// #include<iostream>
// using namespace std;
// int main(){
//     int arr[5]={1,2,3,4,5};
    
//     cout<<arr[5]<<" ";
//     return 0;
// }

                //  How to Find Size of array
#include<iostream>
using namespace std;
int main(){
    int arr[5]={1,2,3,4,5};
   char a;
    cout<<sizeof(a)<<" ";
    return 0;
} 


                    // How to find array size b/w the array 

#include<iostream>
using namespace std;
int main(){
    int arr[5]={1,2,3,4,5};
   
    cout<<sizeof(arr)<<" ";
    return 0;
} 
             // How to Min & Max Number from an Array 


#include<iostream>
#include <climits>
using namespace std;
int main(){
    int arr[5]={1,2,3,4,5};
    int ans = INT_MIN;
    for (int i=0;i<5;i++)
    {
        if (arr[i]<ans)
        ans =arr[1];

    }
    cout<<ans;
    return 0;
} 


// #include<iostream>
// using namespace std;
// int main(){
//     int arr[5]={1,2,3,4,5};
//    int  a;
//     cout<<sizeof(a)<<" ";
//     return 0;
// } 


// #include<iostream>
// using namespace std;
// int main(){
//     int arr[5]={1,2,3,4,5};
//    float a;
//     cout<<sizeof(a)<<" ";
//     return 0;
// } 



// #include<iostream>
// using namespace std;
// int main(){
//     int arr[5]={1,2,3,4,5};
   
//     cout<<sizeof(arr)/sizeof(arr[0])<<" ";
//     return 0;
// } 

   