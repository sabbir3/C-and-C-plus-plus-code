#include<stdio.h>

int main()
{
    char ch[100];
    int i;
    while(NULL!=gets(ch)){

        printf("%s\n",ch);
    }

    return 0;
}
