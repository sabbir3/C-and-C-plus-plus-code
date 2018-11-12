#include<stdio.h>
int main()
{
    double c,f;
    printf("enter the temperature in celsius:");
    scanf("%lf",&c);
    f=c*1.8+32;
    printf("temperature in farenhit=%.2lf F",f);
    return 0;
}
