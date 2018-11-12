#include<stdio.h>

int main()
{
    char ch[11]={'B', 'a', 'n', 'g', 'l', 'a', 'd', 'e', 's', 'h'};
    int length,i;
    printf("%s\n",ch);
    length=10;
    for(i=0; i<length; i++){

        if(ch[i]>=97 && ch[i]<=122){

            ch[i]='A'+(ch[i]-'a');
        }
    }
    printf("%s\n",ch);
    return 0;
}
