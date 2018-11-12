#include <bits/stdc++.h>
using namespace std;
void Sieve(int n)
{
    bool prime[n+1];
    memset(prime, true, sizeof(prime));
    for(int p=2; p*p<=n; p++)
    {
        for(int i=p*2; i<=n; i=i+p)
        {
            if(prime[i]=true)
                prime[i]=false;
        }
    }
    for(int p=2; p<=n; p++)
        if(prime[p])
            cout << p << " ";
    cout << "\n";
}
int main()
{
    int n;
    while(cin >> n)
        Sieve(n);
    return 0;
}
