#include<stdio.h>

int main()
{
    int n,m=0,i,a,b;

    scanf("%d",&a);
    for(i=1; i<=a; i++){

        scanf("%d",&n);
        m=m+n;
    }
    printf("%d",m);
    return 0;
}
