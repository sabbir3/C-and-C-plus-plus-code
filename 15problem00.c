#include<stdio.h>
int main()

{
    int a,b;
    scanf("%d%d",&a,&b);
    printf("A=%d\nB=%d\n",a,b);
    a>b? printf("A>B"):(a<b?printf("A<B"):printf("A=B"));
    return 0;
}
