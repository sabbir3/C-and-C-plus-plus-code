#include<stdio.h>
int main()
{
    int fact,n,i;
    while( scanf("%d",&n)!=EOF){
        fact=1;
        for( i=1; i<=n; i++){
            fact=fact*i;
        }
        printf("%d\n",fact);
    }
    return 0;
}
