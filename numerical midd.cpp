#include<bits/stdc++.h>
#define f(x) (1/exp(x))
#define e .0001
using namespace std;

int main()
{
    float x1,x2;
    int i=2;
    cin>>x1;
    cout<<"x1="<<x1<<endl;
    x2=f(x1);

    while(fabs(x2-x1)>e){

        x1=x2;
        x2=f(x1);
        cout<<"x"<<i<<"="<<x1<<endl;
        cout<<"error="<<fabs(x2-x1)<<endl;

    }
    return 0;
}
