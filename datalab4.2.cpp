#include<iostream>
using namespace std;

int main()
{

   int a[20],n,i,sum=0;
   cin>>n;
   for(i=0; i<n; i++){

    cin>>a[i];
}

    for(i=0; i<n-1;i++){

        if(a[i]<a[i+1]){

            sum++;
        }
    }
     cout<<sum;

}



