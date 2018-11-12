#include<stdio.h>
int main()
{
    int n,i,m;
    scanf("%d",&m);
    printf("namta 1 theke% d porjonto\n",m);
    for( n=1; n<=m; n++){
        for(i=1; i<=10; i++){
            printf("%dX%d=%d\n",n,i,n*i);
        }
    }
    return 0;

}
