#include<stdio.h>

int main()
{
    int n,i,j;

    scanf("%d",&n);

    for(i=n; i<=n+6*2; i++){

        if(i%2!=0){

            printf("%d\n",i);
        }

    }

    return 0;
}
