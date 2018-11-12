#include<iostream>
using namespace std;

class box{

public:
     char name[50], dept[50];
     int se,id;
    box(int n){

    cout<<"your name:";
    cin>>name;
    cout<<"your semester:";
    cin>>se;
    cout<<"your id:";
    cin>>id;
    cout<<"your department:";
    cin>>dept;
    }


    ~box()
    {
    cout<<"\n\n"<<"your name is "<<name<<"\n"<<"you are in "<<se<<" rd semester"<<"\n"<<"your id is:"<<id<<"\n"<<"you are in "<<dept<<" department"<<"\n\n";

    }

};
int main()
{

    int n,i;
    cin>>n;
    box ob(n);
    box b(i);
    for(i=0; i<=n; i++)
    return 0;


    return 0;
}
