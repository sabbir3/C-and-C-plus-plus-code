#include<stdio.h>
///there is BUG , have to DEBUG !!
int main()
{
    int arr[]={10,20,30,40,50,60,70,80,90,100},i,j,temp;

    for(i=0,j=10; i<10; i++,j--){

        temp=arr[j];
        arr[j]=arr[i];
        arr[i]=temp;
    }
     printf("%d\n",arr[i]);
     for(i=0; i<10; i++){

      //  printf("%d\n",arr[i]);
    }


    return 0;
}
