#include<bits/stdc++.h>
using namespace std;


int main()
{

    int test_case,n,i;
    while((scanf("%d",&test_case)==1))
    {
        for(i=0; i<test_case; i++)
        {
            scanf("%d",&n);
            n=n*567;
            n=n/9;
            n+=7492;
            n*=235;
            n/=47;
            n=n-498;
            n/=10;
            n%=10;
            n=abs(n);

            printf("%d\n",n);
        }
    }
    return 0;
}
