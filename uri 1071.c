#include<stdio.h>

int main()
{
    int i,j,n,k,sum=0,t;

    scanf("%d%d",&n,&j);

    if(n>j){

        t=j;
        j=n;
        n=t;
    }


    for(i=n+1; i<j; i++){

        if(i%2==1 || i%2==-1){

            sum=sum+i;

        }

    }

    printf("%d\n",sum);

    return 0;
}

