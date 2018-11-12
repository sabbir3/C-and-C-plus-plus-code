#include<stdio.h>
int main()

{
    int a,b,i,c;
    scanf("%d%d",&a,&b);
    if(b<a)
    {
     c=a;
     a=b;
     b=c;
    }
    for( i=a ; i<=b ; i++)
    {
        printf("% d",i);

    }
    return 0;
}
