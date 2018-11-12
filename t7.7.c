#include<stdio.h>

int main()
{
    int arr[]={-100,11,80,32,65,89,46,8,350,67,20,24};
    int n=12;
    int max;
    max=find_max(arr,n);
    printf("%d",max);
}

int find_max(int arr[], int n)
{
    int i,big;
    big=arr[0];
    for(i=0; i<n; i++){

        if(arr[i]>big){

            big=arr[i];
        }
    }
    return big;
}


