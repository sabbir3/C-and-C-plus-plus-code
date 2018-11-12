///function overriding

#include<string.h>
#include<iostream>
using namespace std;

class a{

    char n[100],m[100];

    public:
        void big(){

        cout<<"the numbers are big or not......"<<"\n";
        cout<<"n=";
        cin>>n;
         cout<<"m=";
        cin>>m;


        if(strlen(n)>strlen(m))
            cout<<"n>m"<<"\n";
        else if(strlen(n)<strlen(m))
            cout<<"n<m"<<"\n";
        else if(strcmp(n,m)==0)
            cout<<"n>m"<<"\n";
        else if(strcmp(n,m)<0)
            cout<<"n<m"<<"\n";
        else
            cout<<"n>m"<<"\n";

    }
};

class b{

    public:
            int id,se;
    char name[20],dept[20];

        void big(){

        cout<<"introduce your self....."<<"\n";
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
    a oa;
    oa.big();

    b ob;
    ob.big();
    return 0;
}
