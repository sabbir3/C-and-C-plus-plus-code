#include<stdio.h>
int main()
{
    int nm[4],sum,i,n;
    sum=0;
    for(i=0; i<4;i++){
        scanf("%d",&nm[i]);
        sum=sum+nm[i];
    }
    printf("%d",sum);
    return 0;
}
