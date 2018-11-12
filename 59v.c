#include<stdio.h>
int main()
{
    char s[20],s1[20];
    int i=0;
    scanf("%s",s);

    for(i=0; s[i]!='\0'; i++)
    s1[i]=s[i];
    s1[i]=s[i];
    printf("%s",s1);
    return 0;
}
