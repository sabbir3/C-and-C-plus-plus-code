#include<iostream>
using namespace std;

class box{

private:
    int b;
    void out(){

    int b=3;
    cout<<b;
    }
public:
  //  int a;
    //cout<<a;
    void print(){

         void out();
    }

};
int main()
{
    box ob;
   // ob.a=10;
    ob.print();
    return 0;
}
