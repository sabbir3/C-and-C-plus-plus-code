#include<iostream>
using namespace std;

int main()
{
    int i,n,fact=1;
    cin>>n;
    for(i=1; i<=n; i++){

        fact=fact*i;
    }
   // fact++;

    cout<<fact;
    return 0;

}
