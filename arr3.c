#include<stdio.h>

int main()
{
    int arr[5],b[6];

    int i,j=0,k,c;

    for(i=0; i<5; i++){

        scanf("%d",&arr[i]);

    }


    for(i=0; i<5; i=i+2){

    j=j+arr[i];
    }
    printf("%d",j);
    return 0;
}


