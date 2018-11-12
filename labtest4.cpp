#include<iostream>
using namespace std;

class box{

    public:
        void add(){

            int a,b,sum;
            cout<<"a=";
            cin>>a;
            cout<<"b=";
            cin>>b;
            sum=a+b;
            cout<<"sum value is:"<<sum<<"\n\n";
        }
        void sum(){

            float a,b,sum;
           cout<<"a=";
            cin>>a;
            cout<<"b=";
            cin>>b;
            sum=a+b;
            cout<<"sum value is:"<<sum<<"\n\n";
        }
};
int main()
{
    box ob;
    ob.add();
    ob.sum();
    return 0;
}
