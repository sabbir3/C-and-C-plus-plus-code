#include<stdio.h>

int main()
{
    int a=5,b=7,c=3,d;

    a*=b;
    b-=52;
    a+=b;
    c=a-b;
    printf("%d %d %d",a,b,c);

    return 0;
}
