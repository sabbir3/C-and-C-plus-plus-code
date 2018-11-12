#include <bits/stdc++.h>
using namespace std;
#define Max 100001
int spf[Max];
void sieve()
{
    spf[1]=1;
    for(int i=2; i<=Max; i++)
        spf[i]=i;
    for(int j=2; j<=Max; j++)
    {
        if(spf[j]==j)
        {
            for(int p=j*2; p<=Max; p+=j)
                if(spf[p]==p)
                    spf[p]=j;
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
        for(int l=0; l<p.size(); l++)
            cout << p[l] << " ";
        cout << "\n";
    }
    return 0;
}
