#include<bits/stdc++.h>
#include<stdio.h>
using namespace std;

int main()
{
    int i, j, n, c,totalProfit=0;
    float w[10], p[10], r[10], sum = 0;

    cout <<"Enter n= ";
    cin>>n;
    cout <<"Enter c= ";
    cin>>c;


    for(i=1; i<=n; i++)
    {
        cout<<"enter p"<<i<<"=";
        cin >> p[i];
        cout<<"enter w"<<i<<"=";
        cin >>w[i];
        r[i] = p[i] / w[i];
    }

    for(i=1; i<=n; i++)
    {
        for(j=1; j<=n-1; j++)
        {
            if(r[j] < r[j+1])
            {
                swap(r[j], r[j+1]);
                swap(w[j], w[j+1]);
                swap(p[j], p[j+1]);

            }
        }
    }


    i = 1;
    while(c>w[i])
    {
        totalProfit += p[i];
        c -= w[i];
        i++;
    }
    totalProfit += c*r[i];

    cout<<"Optimal Solution For the given problem is : "<<totalProfit<<endl;

}
