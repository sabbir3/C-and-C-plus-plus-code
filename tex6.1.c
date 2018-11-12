#include<stdio.h>
int main()
{
    double c,f;
    printf("enter the temperature in farenhit:");
    scanf("%lf",&f);
    c=(f-32)/1.8;
    if( c<0){
        printf("the temperature in celsius=%.2lfC",c);
    }
    else
    printf("the temperature in celsius=%.2lf C",c);
    return 0;

}
