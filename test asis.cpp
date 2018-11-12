#include<iostream>
using namespace std;

int main()
{
    char s1[30],s2[30];

    int j,k,i=0,n=0, ln1, ln2;

    cin>>s1;
    while(s1[i]!='\0'){

        i++;
    }
    ln1=i;
    cout<<"ln_s1="<<ln1<<"\n";
    cin>>s2;
    while(s2[n]!='\0'){

       n++;
    }
   ln2=n;
   cout<<"ln_s2="<<ln2<<"\n";
   cout<<"\n\n\n";
   for(k=0; k<ln1; k++){

        for(j=0; j<ln2; j++){
        cout<<"*";
        }
        cout<<"\n";
   }
    return 0;
}

