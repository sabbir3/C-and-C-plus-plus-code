#include<stdio.h>
int main()

{
    int m[100],i,n;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&m[i]);
    }
    for(i=0; i<n; i++)
    {
    printf("%d",m[i]);
    }
    return 0;
}
