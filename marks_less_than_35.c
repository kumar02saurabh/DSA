#include<stdio.h>
int main(){
    int i;
    int marks[10]={95,35,46,19,26,15,20,78,65,36};

    for(i=0;i<10;i++)
    {
        if(marks[i]<=35)
            printf("%d ",i); //we will get index
        
    }
}