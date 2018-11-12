#include<iostream>
using namespace std;

class box{

public:
   int add(int a, int b){

    int add;
    add=a+b;
    cout<<"add value="<<add<<"\n\n";
    }
    double add(int c, double d){

    double subs;
    subs=c-d;
    cout<<"subtract value="<<subs<<"\n\n";
    }
   double add(double f, double g){

    double multi;
    multi=f*g;
    cout<<"multi="<<multi<<"\n\n";
    }
};
int main()
{
  box ob;
  ob.add(5,6);
  ob.add(6,3.5);
  ob.add(5.5,6.6);
    return 0;

}
