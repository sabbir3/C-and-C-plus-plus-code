#include<stdio.h>

int main()
{
    char i,j;

    for(i=1; i<=26; i++){

        for(j=1; j<=i; j++){

            printf("%c",'A'+j-1);
        }
        printf("\n");
    }
    return 0;
}
