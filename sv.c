#include<stdio.h>
int main()
{

    int n,a,b,c,d,x,y=1,k,fact,i,j,sum;
    scanf("%d",&d);

    for(i=1; i<=d; i++){

            scanf("%d",&n);

            k=n;
            if(n==0)
            {
                break;
            }
            sum=0;

            while(n>=1){

                a=n/10;
                b=a*10;
                c=(n-b);
                 printf("%d\n",c);
                n=a;

                x=c;
                fact=1;
                for(j=1; j<=x;j++){

                    fact=fact*j;
                }

                sum=sum+fact;

            }
            if(k==sum)
             printf("Case%d:%d is a Bizarre Number\n",y,k);

            else
              printf("Case%d:%d is not a Bizarre Number\n",y,k);

            y++;
    }


   return 0;

}

