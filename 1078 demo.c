#include <stdio.h>
int main()
{
    int t, i, counter;
    long long int a, b;
    scanf("%d", &t);
    for(i=1; i<=t; i++)
    {
        counter = 1;
        scanf("%lld%lld", &a, &b);
        if(a%2==0 || a%5==0)
            break;
        else if(b%a==0)
            printf("Case %d: %d\n", i, counter);
        else
        {
            while(!(b%a==0))
            {
                b=(b%10)+b*10;
                //printf("%d\n", b);
                counter++;
            }
        }
        printf("Case %d: %d\n", i, counter);
    }
    return 0;
}
