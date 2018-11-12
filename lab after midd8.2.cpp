///polymorphism
#include<iostream>
using namespace std;
class a{

public:
    int add(int a, int b){

    int sum;
    sum=a+b;
    cout<<"sum="<<sum<<"\n";
    }
    double add(double c, double d){
    double sum;
    sum=c+d;
    cout<<"sum="<<sum<<"\n";
    }
};
int main()
{
    a ob;
    ob.add(3,4);
    ob.add(5.1,6.3);
    return 0;
}

