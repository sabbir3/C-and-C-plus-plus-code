#include<stdio.h>

int main()
{
    int arr[]={-100,11,80,32,65,89,46,8,-350,67,20,24,-200};
    int n=13;
    int mini;
    mini=find_mini(arr,n);
    printf("%d",mini);
}

int find_mini(int arr[], int n)
{
    int i,tini;
    tini=arr[0];
    for(i=0; i<n; i++){

        if(arr[i]<tini){
           tini=arr[i];
        }
    }
    return tini;
}



