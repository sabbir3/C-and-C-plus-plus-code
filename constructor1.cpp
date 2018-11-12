#include<iostream>
using namespace std;
class box{

    int a;
public:

    void num();
    box();
};
box::box(){

    cout<<"in constructor:";
    a=10;
}
void box::num(){

    cout<<a;
}
int main()
{
    box ob;
    ob.num();
    return 0;
}
