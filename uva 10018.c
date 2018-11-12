#include<stdio.h>

int main()
{
      long long n,a,b,c,count,sum,temp,d,p;
      int i,j;


    while(scanf("%d",&j)!=EOF){

        for(i=1; i<=j; i++){

                scanf("%lld",&n);
                a=n;
                count=0;

            while(1){

                sum=0;
                while(n!=0){

                    b=n%10;
                    sum=sum*10+b;
                    n/=10;
                }

                if(a==sum)
                    break;
                else{

                    n=a+sum;
                    a=a+sum;
                    count++;
                }
            }
             printf("%lld %lld\n",count,a);
        }

    }
    return 0;
}
