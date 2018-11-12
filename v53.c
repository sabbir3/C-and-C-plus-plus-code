#include<stdio.h>

int main()
{
    char ch[20];

    //scanf("%s",ch);
    //scanf("%[^\n]",ch);
    gets(ch);
    printf("%s",ch);
    return 0;

}
