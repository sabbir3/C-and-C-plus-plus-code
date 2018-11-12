#include<stdio.h>

int main()
{
    long int n,b,i,sum,x;
    int a[100];
    while(scanf("%ld",&n)!=EOF){


        x=n;
        sum=0;
        if(n<0){
            break;
        }
        while(n>0){

            b=n%3;
            n=(n/3);
           sum++;
      }

         for(i=0; i<sum; i++){

            b=x%3;
            a[i]=b;
            x=x/3;
         }
         if(sum==0)
         printf("0");

            for(i=sum-1;i>=0; i--)
                printf("%d",a[i]);
                printf("\n");
    }
    return 0;
}
