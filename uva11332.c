#include<stdio.h>
int main()
{

    long long int n,a;
    while(scanf("%lld",&n)!=EOF){

            if(n==0)
            {
                break;
            }

            while(n>9){
                a=(n%10);
                n=(n/10);
                n=n+a;
                 printf("%d\n",n);
            }

    }

   return 0;

}
