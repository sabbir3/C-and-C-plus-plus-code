#include<bits/stdc++.h>
using namespace std;

int main()
{
    float a,b,c,r1,r2;

   cin>>a;
   cin>>b;
   cin>>c;

   r1=((-b+sqrt(b*b-4*c*a))/2*a);
   r2=((-b-sqrt(b*b-4*c*a))/2*a);

   cout<<"R1="<<r1<<"\n"<<"R2="<<r2<<"\n";

   return 0;
}
