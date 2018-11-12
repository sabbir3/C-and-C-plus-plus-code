#include<stdio.h>
int main()
{
    int i,sum,nm[4];
    sum=0;
    for( i=1; i<4; i++){
        scanf("%d",&nm[i]);
        sum=sum+nm[i];
    }
    printf("%d\n",sum);
    return 0;
}
