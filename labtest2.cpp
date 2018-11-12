#include<iostream>
using namespace std;

class s{

public:

        int se,id;
        double cgp;
        char name[50], dept[50];
        s(){

        cout<<"enter your name:";
        cin>>name;
          cout<<"enter your id:";
        cin>>id;
          cout<<"enter your department:";
        cin>>dept;
          cout<<"enter your semester:";
        cin>>se;
          cout<<"enter your CGP:";
        cin>>cgp;





        cout<<"\n\n"<<"your name is:"<<name<<"\n"<<"your id:"<<id<<"\n"<<"your department:"<<dept<<"\n"<<"your semester:"<<se<<"\n"<<"your CGP:"<<cgp<<"\n\n";

        }

};
int main()
{
    int n,i;
    s ob;
//    ob=n;
    cin>>n;
    for(i=0; i<n; i++)
    return 0;
}

