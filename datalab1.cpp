#include<bits/stdc++.h>
using namespace std;
int time(int a, int b);
int main()
{
    int d,e,t;

    cout<<"enter your position="<<"\n";
    cin>>d;
      cout<<"enter lift position="<<"\n";
    cin>>e;
    time(d,e);
}

int time(int a, int b){

    int t;
    if(a>b){

       t=4*a+19+(a-b)*4;
       cout<<"the time is="<<t<<"\n";
    }
    else
    {
         t=b*4+19;
       cout<<"the time is="<<t<<"second"<<"\n";
    }
}
