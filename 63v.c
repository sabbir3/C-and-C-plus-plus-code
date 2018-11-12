#include<stdio.h>
#include<string.h>

int main()
{
    char n[100],m[100];
    int i=0;

    scanf("%s%s",n,m);

        if( n[i]<m[i]&&strlen(n)<strlen(m)){

            printf("n<m \n");
            i++;

        }

         else if ( n[i]>m[i]&&strlen(n)>strlen(m)){

            printf("n>m \n");
            i++;
        }
        else if(strlen(n)>strlen(m))
            printf("n>m \n");
        else if(strlen(n)<strlen(m))
            printf("n<m \n");
        else if(strcmp(n,m)==0)
            printf("n=m \n");
        else if(strcmp(n,m)<0)
            printf("n<m \n");
        else
            printf("n>m \n");

    return 0;
}
