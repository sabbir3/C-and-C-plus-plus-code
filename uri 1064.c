#include<stdio.h>

int main()
{
    float i,n,a,b,sum=0,count=0;

    for(i=1; i<=6; i++){

        scanf("%f",&n);

        if(n>0){
              sum=sum+n;
              count++;
        }

    }
    printf("%.f valores positivos\n",count);
    printf("%.1f\n",sum/count);

}
