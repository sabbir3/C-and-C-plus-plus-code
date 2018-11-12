#include<stdio.h>

int main()
{
    int x=90;

    int *p;

    p=&x;
    printf("*p =%d\n",*p);
    printf("value of p is %p\n",p);

    return 0;
}
