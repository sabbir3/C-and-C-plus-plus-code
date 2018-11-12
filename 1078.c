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
        while(b)
        {
            if(b%a==0)
            {
                printf("Case %d: %d\n", i, counter);
                break;
            }

            else
            {
                b=b+b*10;
                counter++;
            }
        }
    }
    return 0;
}
