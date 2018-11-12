#include<stdio.h>

int main()
{
    char s[30], s1[30];
    int i,n;
    scanf("%s%s",s,s1);
    for(i=0; s[i]!='\0'; i++);
    s[i]=' ';
    i++;
    for(n=0; s1[n]!='\0'; n++)
    s[i+n]=s1[n];
     s[i+n]=s1[n];

    printf("%s",s);
    return 0;

}
