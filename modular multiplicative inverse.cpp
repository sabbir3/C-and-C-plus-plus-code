#include <bits/stdc++.h>
using namespace std;
int modInverse(int a, int m)
{
    a=a%m;
    for(int i=1; i<m; i++)
        if((a*i)%m==1)
            return i;
}
int main()
{
    int a, m;
    while(cin >> a >> m)
        cout << modInverse(a, m) << endl;
    return 0;
}
