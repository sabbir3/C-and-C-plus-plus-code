#include<stdio.h>

int main()
{
    int x=10;
    int *p;

    p=&x;
    printf("value of x:%d\n",x);

    *p=20;
     printf("value of x:%d\n",x);
    printf("address of x:%p\n",&x);
    printf("value of p:%p\n",p);

    return 0;
}
