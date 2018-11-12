#include <bits/stdc++.h>
using namespace std;
#define MAX 100001
int spf[MAX];
void sieve()
{
    spf[1]=1;
    for(int i=2; i<MAX; i++)
        spf[i]=i;
    for(int i=2; i<=MAX; i++)
    {
        if(spf[i]==i)
        {
            for(int j=i*2; j<=MAX; j+=i)
                if(spf[j]==j)
                    spf[j]=i;
        }
    }
}
vector<int> getFactorization(int x)
{
    vector<int> ret;
    while(x!=1)
    {
        ret.push_back(spf[x]);
        x=x/spf[x];
    }
    return ret;
}
int main()
{
    int n;
    sieve();
    while(cin >> n)
    {
        cout << "Prime Factorization of " << n << ": ";
        vector<int> p = getFactorization(n);
        for(int k=0; k<p.size(); k++)
            cout << p[k] << " ";
        cout << "\n";
    }
    return 0;
}
