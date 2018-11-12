#include<stdio.h>

int main()
{
    int n,i,k,m,cas=1;

     while(scanf("%d%d",&k,&n)!=EOF){

       printf("case=%d:\n",cas++);
    for(i=1; i<=n; i++){


        m=k*i;

        printf("%d x %d = %d\n",k,i,m);
    }

     }

    return 0;
}
