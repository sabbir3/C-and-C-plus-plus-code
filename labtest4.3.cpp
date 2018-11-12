#include<iostream>
using namespace std;

class box{

    public:
        float add(float a, float b, float c){

            float ave;
            cout<<"a=";
            cin>>a;
            cout<<"b=";
            cin>>b;
            cout<<"c=";
            cin>>c;

            ave=float((a+b+c)/3);
            cout<<"average value is:"<<ave<<"\n\n";
        }
        double add(double a, int b, int c){

            double mul;
              cout<<"a=";
            cin>>a;
            cout<<"b=";
            cin>>b;
            cout<<"c=";
            cin>>c;

            mul=a*b*c;
            cout<<"multiple value is:"<<mul<<"\n\n";
        }


};
int main()
{

    box ob;
    float m,n,b;
    ob.add(m,n,b);
    double v,c,x;
    ob.add(v,c,x);
    return 0;
}



