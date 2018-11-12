#include <bits/stdc++.h>
using namespace std;
int power(int x, int y, int p)
{
    int res=1;
    x=x%p;
    while(y>0)
    {
        if(y&1)
            res=(res*x)%p;
        y=y>>1;
        x=(x*x)%p;
    }
    return res;
}
int main()
{
    int x, y;
    int p = 1000000007;
    while(cin >> x >> y)
        cout << power(x, y, p) << "\n";
    return 0;
}
