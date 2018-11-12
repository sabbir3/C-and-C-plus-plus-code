#include<stdio.h>
int main()
{
    int process,i[100],j;
    printf("enter the process\n");
    scanf("%d",&process);
        for(j=0;j<process;j++)
    {
        scanf("%d",&i[j]);
    }
    for(j=0;j<process;j++)
    {
        printf("%d %d",j,i[j]);
    }
    return 0;
}

