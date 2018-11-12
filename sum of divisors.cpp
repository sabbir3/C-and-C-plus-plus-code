#include <bits/stdc++.h>
using namespace std;
int divisors(int n)
{
    vector<int> v;
    int sum=0;
    for(int i=2; i*i<=n; i++)
    {
        if(n%i==0)
        {
            if(n/i==i)
                sum=sum+i;
            else
                sum=sum+(n/i)+i;
        }
    }
    return sum+1;
}
int main()
{
    int n;
    while(cin >> n)
        printf("%d\n", divisors(n));
    return 0;
}
