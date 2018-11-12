#include<stdio.h>

int main()
{
    char s[20],s1[20];

    int i=0,ck=1;
    scanf("%s%s",s,s1);

    while(s[i]!='\0'||s1[i]!='\0'){

        if(s[i]!=s1[i]){
            ck=0;
            break;
        }
        i++;
    }
    if(ck==1)
        printf("same");
    else
        printf("not same");
    return 0;
}
