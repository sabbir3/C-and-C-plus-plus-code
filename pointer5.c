#include<stdio.h>

int main()
{
    int x=10;
    int *p;
    int y;

    printf("value of x:%d\n",x);
    p=&x;
    y=*p;
    *p=15;
    printf("value of   x:%d\n",x);
    printf("value of   y:%d\n",y);
    printf("value of  *p:%d\n",*p);
    printf("address of y:%p\n",&y);
    printf("address of p:%p\n",p);
    printf("address of x:%p\n",&x);
}
