#include<stdio.h>
int main()

{
    int a,b,c,n;
    scanf("%d%d",&a,&b);
    if(a>b)
    {
        c=a;
        a=b;
        b=c;
    }
    for( n=a; n<=b; n++)
    {
        printf("%d\n\n",n);
    }
    return 0;
}
