#include<stdio.h>

int main()
{
    char ch[30];
    int n,i;
    n=6;
    i=3;

    gets(ch);
    printf("%*.*s",n,i,ch);
    return 0;
}
