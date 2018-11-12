#include<stdio.h>
int main()
{
    int n,k,p,a,sum,b;
    while(scanf("%d%d",&n,&k)!=EOF){


     p=n;
     sum=0;
        while(p>=k){

            a=p/k;
            b=p%k;
            p=a+b;
            sum=sum+a;

      }
        printf("%d\n",n+sum);
    }


    return 0;
}
