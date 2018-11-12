#include<stdio.h>
int main()
{
    int a,b,i,n;
    scanf("%d",&n);
    for (i=0;i<n;i++){
        printf("enter two number ");
    scanf("%d%d",&a,&b);
    if (a>b)
    {
        printf(">\n");
    }
    else if (a<b)
    {
        printf("<\n");

    }
    else
    {
        printf("=\n");
    }
    }
    return 0;
}
