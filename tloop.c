#include<stdio.h>

int main()
{
    int a=0,n,i,j;

    scanf("%d",&j);
    for(n=1; n<=j; n++){
    for(i=1; i<=10; i++)
    {

        printf("%d X %d=%d\n",n,i,i*n);
    }
    printf("\n");
    }
    return 0;
}
