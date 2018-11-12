#include<iostream>
using namespace std;

class add{

    public:
         add(float a, float b, float c){

            float ave;
            cout<<"a=";
            cin>>a;
            cout<<"b=";
            cin>>b;
            cout<<"c=";
            cin>>c;

            ave=float((a+b+c)/3);
            cout<<"average value is:"<<float(ave)<<"\n\n";
        }
         add(double a, int b, int c){

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

    float m,n,b;
    add ob(m,n,b);
    double v,c,x;
    add o(v,c,x);
    return 0;
}





