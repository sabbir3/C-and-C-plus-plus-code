#include<stdio.h>

int main()
{
    int n,a,b,c,d,e,f,g,h,i;

    while(scanf("%d",&n)!=EOF){

          if(n%3==0){

            a=n/3;
            b=a/3;
            if(b==1){

                printf("%d\n",n+a+b);
            }
            else{
            c=b%3;
            d=(c+2);
            e=d/3;
            printf("%d\n",n+a+b+e);
          }
          }
          else if(n%3==2){

            a=n/3;
            c=n%3;
            if(c<3){
              b=(a+c);
              e=b/3;
              f=b%3;
              g=(e+f+1);
              h=g/3;
              printf("%d\n",n+a+e+h);
            }
            else{
            b=a/3;
            d=(b+c);
            e=d/3;
            printf("%d\n",n+a+b+e);
          }
          }
         else if(n%3==1){

            a=n/3;
            b=a/3;
            c=n%3;
            d=(b+c+1);
            e=d/3;
            printf("%d\n",n+a+b+e);
         }

    }
    return 0;
}
