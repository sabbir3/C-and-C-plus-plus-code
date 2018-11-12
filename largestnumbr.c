#include<stdio.h>
int main()

{
    int a,b,c;
    scanf("%d%d%d",&a,&b,&c);
    printf("A=%d\nB=%d\nC=%d\n",a,b,c);
    if ( a>b)
    {
        if (a>c)
            printf("LARGEST NUMBER &d",a);
        else
            printf("LARGEST NUMBER &d",c);
    }
    else
    {
        if( b>c)
            printf("LARGEST NUMBER %d",b);
        else
            printf("LARGEST NUMBER %d",c);
    }
    return 0;
}
