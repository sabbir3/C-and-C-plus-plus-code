#include<iostream>
using namespace std;
class a{

    public:
        a(double r){

            double  area,pi=3.1416;
            area=pi*r*r;
            cout<<"area="<<area;
        }
};
int main()
{
    double s;
    cin>>s;
    a b(s);
    return 0;
}
