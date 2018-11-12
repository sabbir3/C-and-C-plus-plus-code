#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,i,j,k;
    cin>>n;
    int a[n],b[n],c[n];

    for(i=1; i<=n; i++){

        cin>>a[i];
    }
    for(j=1; j<=n; j++){

        cin>>b[j];
    }
    for(k=1; k<=n; k++){

        c[k]=a[k]+b[k];
        //cout<<c[k];
        printf("%d ",c[k]);
    }
    cout<<"\n";

    return 0;
}
