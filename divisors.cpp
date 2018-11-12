#include <bits/stdc++.h>
using namespace std;
void divisors(int n)
{
    vector<int> v;
    for(int i=1; i*i<=n; i++)
    {
        if(n%i==0)
        {
            if(n/i==i)
                printf("%d ", i);
            else
            {
                printf("%d ", i);
                v.push_back(n/i);
            }
        }
    }
    for(int i=v.size()-1; i>=0; i--)
        printf("%d ", v[i]);
}
int main()
{
    int n;
    while(cin >> n)
    {
        cout << "The divisors of " << n << ": ";
        divisors(n);
    }
    return 0;
}

