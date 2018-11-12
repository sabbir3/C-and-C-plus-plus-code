#include<iostream>
using namespace std;

class box{

    public:
        box(int a, int b){

            int sum;

            sum=a+b;
            cout<<"sum value is:"<<sum<<"\n\n";
        }
        box(double a, int b){

            double sub;

            sub=a-b;
            cout<<"subtract value is:"<<sub<<"\n\n";
        }
          box(double a, double b){

            double mul;

            mul=a*b;
            cout<<"multiple value is:"<<mul<<"\n\n";
        }

};
int main()
{

    box ob(5,6);
    box b(5.4,4);
    box o(6.3,6.2);
    return 0;
}

