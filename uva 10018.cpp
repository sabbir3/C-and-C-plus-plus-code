#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,a,b,c,count,i,j,sum,temp,d,p;


    while(scanf("%d",&j)!=EOF){

        for(i=1; i<=j; i++){

                scanf("%d",&n);
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
             printf("%d %d\n",count,a);
        }

    }
    return 0;
}
