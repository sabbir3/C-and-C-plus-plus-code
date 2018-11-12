#include<iostream>
using namespace std;

class D{

    private:
        int meter;
    public:
        friend int func(D);
};

int func(D d){

d.meter=5;
return d.meter/2;
}
int main()
{
    D d;

    cout<<"distance="<<func(d);
    return 0;
}
