#include <bits/stdc++.h>
using namespace std;
void leastPrimeFactor(int n)
{
    vector<int> leastPrime(n+1, 0);
    leastPrime[1] = 1;
    for(int i=2; i<=n; i++)
    {
        if(leastPrime[i]==0)
        {
            leastPrime[i]=i;
            for(int j=2*i; j<=n; j=j+i)
                if(leastPrime[j]==0)
                    leastPrime[j]=i;
        }
    }
    for(int i=1; i<=n; i++)
        cout << "Least Prime Factor of " << i << ": " << leastPrime[i] << "\n";
}
int main()
{
    int n;
    while(cin >> n)
        leastPrimeFactor(n);
    return 0;
}
