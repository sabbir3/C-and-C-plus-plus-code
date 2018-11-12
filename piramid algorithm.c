#include<stdio.h>
int main()
{
    int r,i,j,n;
    char ach ='a';
    scanf("%d",&r);
    for(i=r; i>=1; --i)
    {

        for(n=1; n<=r;n++)
            printf("  ");
        for(j=1;j<=r; j++)
        {
            printf("%c ",ach);
            ach++;
        }

        for(j=r;j>=0; j--)
        {
            printf("%c ",ach);
            ach--;

        }
            printf("\n");
    }
    return 0;
}
