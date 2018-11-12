#include<iostream>
using namespace std;


class box{

public:
    int a,b;
    int add(){

   cin>>a>>b;
   return a+b;

    }
};
int main()
{
    box b;
    b.add();
    return 0;
}
