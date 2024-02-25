# include<iostream>
using namespace std;
int main (){
      cout<<"Reverse Number is : ";
    int arr[5]={6,5,4,9,45};

    int start=0,end =4;

    while(start<end)
    {
        swap(arr[start],arr[end]);
        start ++, end--;
    }
    for (int i=0;i<5;i++)
  
    cout<<arr[i]<<"  ";
}