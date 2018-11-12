#include<stdio.h>
int main()
{
    char ch[]={'B', 'A', 'N', 'G', 'L', 'A', 'D', 'E', 'S', 'H'};
    int length=10,i;
     printf("%s",ch);

    for(i=0; i<10; i++){

        if(ch[i]>=65 && ch[i]<=90){

            ch[i]='a'+(ch[i]-'A');
        }
    }
    printf("%s",ch);
    return 0;
}

