#include<bits/stdc++.h>
using namespace std;

int main()
{
    int p[30],w[30],x[30],sum=0;
    int c,n,i,j;
    cout<<"enter n=";
    cin>>n;
    cout<<"enter c=";
    cin>>c;
    for(i=1; i<=n; i++){

        cout<<"enter p"<<i<<"=";
        cin>>p[i];
        cout<<"enter w"<<i<<"=";
        cin>>w[i];
        x[i]=p[i]/w[i];
    }
    for(i=1; i<=n; i++){
        for(j=1; j<=n-1; j++){
            if(x[j]<x[j+1]){

                swap(x[j],x[j+1]);
                 swap(w[j],w[j+1]);
                  swap(p[j],p[j+1]);
            }
        }
    }
    i=0;
    while(c>w[i]){

        sum+=p[i];
        c-=w[i];
        i++;
    }
    sum+=c*x[i];
    cout<<"optimal solution="<<sum;

    return 0;
}
