#include<stdio.h>

int main()
{
    int a,b,i,j;
    scanf("%d",&a);
    for(i=1,j=1; i<=a,j<=a-i+1; i++,j++){


        printf("*");
    }
    printf("\n");

    return 0;
}


