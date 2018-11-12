#include<stdio.h>
int main()
{
    int sum,i,nm[4];
    sum=0;
    for( i=0; i<4; i++){
        scanf("%d",&nm[i]);
        sum=sum+nm[i];
    }
    printf("%d\n",sum);
    return 0;
}
