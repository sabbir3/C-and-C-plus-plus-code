#include<iostream>
using namespace std;

class sabbir{

    private:
        int d;
    public:

        sabbir(){

        d=5;
        }
        sabbir operator ++(){


        d=d+4;
        cout<<"the number is ="<<d;
        }
};
int main()
{
    sabbir ob;
    ++ob;
    return 0;
}
