#include<stdio.h>
int main()

{
    int a,b,c;
    scanf("%d%d%d",&a,&b,&c);
    printf("A=%d\nB=%d\nC=%d\n",a,b,c);
    if (a>b)
    {
        if(a>c)
            printf("LARGEST NUMBER A=%d",a);
            else printf("LARGEST NUMBER C%d",c);
    }
    else
    {
        if( b>c )
            printf("LARGEST NUMBER B=%d",b);
        else printf("LARGEST NUMBER C=%d",c);
    }
    return 0;
}
