#include<stdio.h>

int main()
{
    int a;

    int *p;

    p=&a;

    a=5;
    printf("%d\t%d",a,p);
    return 0;

}
