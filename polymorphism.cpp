///virtual

#include<iostream>
using namespace std;

class a{

    public:
        int a,b;
       virtual void add(){
        cin>>a>>b;
        int sum;
        sum=a+b;
        cout<<"sum="<<sum;
        }
};

class b:public a{

    public:
        int c,d;
        void add(){
        cin>>c>>d;
        int multi;
        multi=c*d;
        cout<<"multi="<<multi;
        }
};
int main()
{
    a*ob;
    b oc;
    ob=&oc;
    ob->add();

}

