#include<stdio.h>
int main()
{
    int fact,n;
    while(scanf("%d",&n)!=EOF){
            fact=1;
    while(n>1){
        fact=fact*n;
        n--;
    }
    printf("%d\n",fact);
    }
    return 0;
}
