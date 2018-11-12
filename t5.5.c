#include<stdio.h>

int main()
{
    int n,sum=0,i;

    scanf("%d",&n);
    for(i=1; i<=n; i++){

        sum=sum+i;
    }

    printf("summation is=%d",sum);
    return 0;
}
