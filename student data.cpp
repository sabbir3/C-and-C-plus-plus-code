#include<iostream>
using namespace std;
class box{

public:
    int id,se;
    char name[20],dept[20];
    void de(){



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

};
int main()
{
    int i,n;
    cin>>n;
    box ob[n];
    for(i=0;i<n; i++)
    ob[i].de();
    return 0;
}
