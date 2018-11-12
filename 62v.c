#include<stdio.h>
#include<string.h>

int main()
{
    char s[30],s1[30],s2[20];
    int ln,ck;

    scanf("%s%s",s,s1);

    ck=strcmp(s,s1);
    if(ck==0)
        printf("same");
    else
        printf("not same");

    return 0;
}
