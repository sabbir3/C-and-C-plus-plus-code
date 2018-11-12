#include<iostream>
using namespace std;

class box{

    public:
        int add(int a, int b){

            int sum;

            sum=a+b;
            cout<<"sum value is:"<<sum<<"\n\n";
        }
        double add(double a, int b){

            double sub;

            sub=a-b;
            cout<<"subtract value is:"<<sub<<"\n\n";
        }
        double add(double a, double b){

            double mul;

            mul=a*b;
            cout<<"multiple value is:"<<mul<<"\n\n";
        }

};
int main()
{

    box ob;
    ob.add(5,6);
    ob.add(5.4,4);
    ob.add(6.3,6.2);
    return 0;
}


