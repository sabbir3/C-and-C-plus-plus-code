#include<iostream>
using namespace std;
class box{

public:
    add(int a, int b){

    int sum;
    sum=a+b;
    cout<<"sum"<<sum;
    }
    add(double c, double d){
    double sum;
    sum=c+d;
    cout<<"sum"<<sum;
    }
};
int main()
{
    box ob;
    ob.add(3,4);
    ob.add(5.1,6.3);
    return 0;
}
