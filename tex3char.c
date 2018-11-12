#include<stdio.h>
int main()

{
    char ch='w';
    if( ch>='a' && ch<='z')
    {
        printf("%c lower case \n",ch);
    }
    if( ch>='A' && ch<='Z')
    {
        printf("%c upper case \n",ch);
    }
    return 0;
}
