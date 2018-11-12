#include<stdio.h>

int main()
{
    int i,n,j,k,sum,temp;
    int arr[1000];

    while(scanf("%d",&n)!=EOF){

            sum=0;
            for(i=0; i<n; i++)
            scanf("%d",&arr[i]);

    for(i=1; i<n; i++)
    for(j=n-1; j>=i; j--)

        if(arr[j-1]>arr[j]){

            temp=arr[j-1];
            arr[j-1]=arr[j];
            arr[j]=temp;
            sum++;
        }
     printf("Minimum exchange operations :%d\n",sum);
    }


    return 0;
}
