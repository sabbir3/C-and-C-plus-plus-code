#include<stdio.h>
int main()
{
    double c,f;
    printf("c=");
    scanf("%lf",&c);
    f=((c*1.8)+32);
    printf("temperature in farenheit =%.2lf F",f);
    return 0;
}
