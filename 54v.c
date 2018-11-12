#include<stdio.h>

int main()
{
    char ch[20];

    //scanf("%[a-z A-Z0-9@#$%^&.;'|,?!]",ch);
    gets(ch);

    printf("%s",ch);
    return 0;
}
