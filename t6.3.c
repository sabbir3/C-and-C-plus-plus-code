#include<stdio.h>

int main()
{
    int arr1[10]={10,20,30,40,50,60,70,80,90,100},arr2[10],i,j;

    for(i=0,j=9; i<10;i++,j--){

        arr2[j]=arr1[i];
    }
    for(i=0; i<10; i++){

        arr1[i]=arr2[i];
    }
    for(i=0; i<10; i++){

         printf("%d\n",arr1[i]);
    }

    return 0;
}
