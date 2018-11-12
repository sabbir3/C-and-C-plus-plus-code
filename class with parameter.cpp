#include<iostream>
using namespace std;

class box{
double pi=3.1416;
public:
    void p(double r);

};
void box::p(double r){

double area;
area=2*pi*r;
cout<<"area is="<<area;
}
int main()
{
    int c;
    cout<<"radius=";
    cin>>c;
    box ob;
    ob.p(c);
    return 0;
}
