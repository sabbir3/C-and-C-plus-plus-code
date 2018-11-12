#include<stdio.h>

int main()
{
    double i,j,k,n,cost;

    while(scanf("%lf",&n)!=EOF){

    if(n<=50){

        cost=(n*.5);
        printf("cost=%lf",cost);
    }

    else if(n>50 && n<150){

        i=n-50;
        cost=(50*.5+i*.75);
        printf("cost=%lf",cost);
    }
     else if(n>150 && n<250){

        i=n-150;
        cost=(50*.5+100*.75+i*1.2);
        printf("cost=%lf",cost);

    }
    else if(n>250){

        i=n-250;
        cost=(50*.5+100*.75+100*1.2+i*1.5);
        printf("cost=%lf",cost);
    }
    }
    return 0;
}
