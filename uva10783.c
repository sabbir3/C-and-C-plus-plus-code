#include <stdio.h>
int main()
{
    int t, i, a, b, sum, j;
    scanf("%d", &t);
    for(i=1; i<=t; i++)
    {
        sum=0;
        scanf("%d%d", &a, &b);
        if(a%2==0)
        {
            for(j=a+1; j<=b; j=j+2)
                sum = sum+j;
        }
        else
        {
            for(j=a; j<=b; j=j+2)
                sum = sum+j;
        }
        printf("Case %d: %d\n", i, sum);
    }
    return 0;
}
