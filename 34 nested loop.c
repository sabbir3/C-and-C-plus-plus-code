#include<stdio.h>
int main()

{
    int a,c,b,n;
    for( n=1; n<=5; n++)

    {scanf("%d%d",&a,&b);
    for ( c=a; c<=b; c++)
    {
        printf("%d\n\n",c);
    }
    }
    return 0;
}
