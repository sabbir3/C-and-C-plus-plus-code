#include<stdio.h>

int main()
{
    int arr[]={-100,11,80,32,65,89,46,8,-350,67,20,24,-200};
    int n=13;
    int avg;
    avg=find_mini(arr,n);
    printf("%d",avg);
}

int find_mini(int arr[], int n)
{
    int i,tini=0,avg;
    for(i=0; i<n; i++){

        tini=tini+arr[i];
        avg=tini/n;

    }
    return avg;
}




