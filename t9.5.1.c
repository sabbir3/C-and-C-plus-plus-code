#include<stdio.h>

int string_length(char ch[]){

    int i,count=0;
    for(i=0; ch[i]!='\0'; i++){

        count++;
    }
    return count;

}

int main()
{
    char ch[100];
    int i,j;
    while(scanf("%s",ch)!=EOF){

        i=string_length(ch);
        printf("%d\n",i);
    }

}


