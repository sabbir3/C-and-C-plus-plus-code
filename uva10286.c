#include<stdio.h>
int main()
{
    float p,r,n;

    while(scanf("%f",&n)!=EOF){

        p=n*5;
        r=(p/4);
        printf("%.10f\n",r);
    }
    return 0;
}
