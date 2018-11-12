#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,i,j,k;
    cin>>n;
    int a[n];

    for(i=1; i<=n; i++){

        cin>>a[i];
    }

    int p;
    cin>>p;
    int b[p];
     for(j=1; j<=p; j++){

        cin>>b[j];
    }

    int c[p],sum;


         for(j=1; j<=p; j++){
                sum=0;
         for(i=1; i<=n; i++){

        if(b[j]==a[i]){
            sum++;

         }

         }

        if(sum>0){

            cout<<sum<<"\n";
       }
        else{

            cout<<"NOT PRESENT"<<"\n";
       }

       }


    return 0;
}
