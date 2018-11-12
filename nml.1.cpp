#include<bits/stdc++.h>
using namespace std;

int main()
{
    int i,j,n;
    cin>>n;
    double p=1/9.0,k,a[n],b;

    for(i=1; i<=n; i++){
         cin>>k;
        a[i]=abs(p-k);
    }

    sort(a,a+n);
    cout<<a[1];

    return 0;
}
