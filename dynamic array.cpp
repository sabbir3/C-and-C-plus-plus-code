#include<bits/stdc++.h>
using namespace std;

int main()
{


   int sum=0;
    vector<int> v;
    v.push_back(1);
    v.push_back(3);
    v.push_back(5);
    v.push_back(7);
    v.push_back(9);

   for( int i=0; i<v.size(); i++){

    sum=sum+v[i];

   }
   cout<<sum;



    return 0;
}
