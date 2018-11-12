
#include<string.h>
#include<iostream>
using namespace std;

int main()
{
    char n[100],m[100];

        cin>>n>>m;


        if(strlen(n)>strlen(m))
            cout<<"n>m"<<" \n";
        else if(strlen(n)<strlen(m))
             cout<<"n<m"<<" \n";
        else if(strcmp(n,m)==0)
            cout<<"n=m"<<" \n";
        else if(strcmp(n,m)<0)
            cout<<"n<m"<<" \n";
        else
             cout<<"n>m"<<" \n";

    return 0;
}

