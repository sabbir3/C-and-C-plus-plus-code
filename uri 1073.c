#include<stdio.h>

int main()
{
    long long n,i,a;

    scanf("%lld",&n);

    for(i=1; i<=n; i++){

        if(i%2==0){

            a=i;
            printf("%lld^2 = %lld\n",i,i*a);
        }
    }

    return 0;
}
