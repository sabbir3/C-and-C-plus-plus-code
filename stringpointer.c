#include<stdio.h>

int main()
{
    char s[]="Bangladesh";
    char *p;

    p=s;

    printf("name of the country: %s\n",s);
    printf("address of s:%p\n",s);
     printf("address of p:%p\n",p);


    return 0;
}
