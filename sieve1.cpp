#include <bits/stdc++.h>
using namespace std;
void Sieve(int n)
{
    bool prime[n+1];
    memset(prime, true, sizeof(prime));
    for(int i=2; i*i<=n; i++)
    {
        {
            for(int j=i*2; j<=n; j=j+i)
                if(prime[j]==true)
                    prime[j]=false;
        }
    }
    for(int i=2; i<=n; i++)
        if(prime[i])
            cout << i << " ";
    cout << "\n";
}
int main()
{
    int n;
    while(cin >> n)
        Sieve(n);
    return 0;
}
