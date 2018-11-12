#include<stdio.h>
#include<string.h>

int main()
{
    char n[100],m[100];

    while(scanf("%s%s",n,m)!=EOF){


        if(strlen(n)>strlen(m))
            printf("n>m \n");
        else if(strlen(n)<strlen(m))
            printf("n<m \n");
        else if(strcmp(n,m)==0)
            printf("n>m \n");
        else if(strcmp(n,m)<0)
            printf("n<m \n");
        else
            printf("n>m \n");
    }
    return 0;
}
