#include<iostream>
using namespace std;
class box{

public:
    int id,se,i,n;
    char name[20],dept[20];
    void de(){
        cin>>n;
        for(i=1; i<=n; i++){
        cout<<"enter your name:";
        cin>>name;
        cout<<"enter your department:";
        cin>>dept;
        cout<<"enter your id:";
        cin>>id;
        cout<<"enter your semester:";
        cin>>se;
        cout<<"\n\n\n";
        cout<<"your name is:"<<name<<endl<<"your department is:"<<dept<<endl<<"your id is:"<<id<<endl<<" your are in:"<<se<<" rd semester"<<endl<<"\n\n";

    }
    }
};
int main()
{
    box ob;
    ob.de();
    return 0;
}

