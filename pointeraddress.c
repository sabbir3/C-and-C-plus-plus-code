#include<stdio.h>

int main()
{
    char c='A';
    char *p;

    p=&c;

    printf("address of c :%p\n",p);
    printf("address of p :%p\n",&p);

    return 0;
}
