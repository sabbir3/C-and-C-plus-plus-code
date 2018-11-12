#include<iostream>
using namespace std;
class box{

    public:
        box(double r){


        double w,h,volume;
        cout<<"w=";
        cin>>w;
        cout<<"h=";
        cin>>h;
        volume=r*w*h;
        cout<<"the volume is:"<<volume;
        }
};
int main()
{
    double r;
    cout<<"r=";
    cin>>r;
    box ob(r);
    return 0;
}
