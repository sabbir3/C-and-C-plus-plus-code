#include<stdio.h>
int main()
{
    int arr[10];
    int i, j,n;
    arr[0]=0;
    arr[1]=1;

    for(i=2; i<=10; i++){

    arr[i]=arr[i-1]+arr[i-2];
    printf("%d\n",arr[i]);
    }
    return 0;
}
