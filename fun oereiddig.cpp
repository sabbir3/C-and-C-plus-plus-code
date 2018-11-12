#include<iostream>
using namespace std;
class nasim
{
public:
     double a,b,sum;
    void show()
    {
    cin>>a>>b;
    sum=a+b;
    cout<<"sum:"<<sum<<"\n";
    }
};
class nusrat:public nasim
{
public:
     double c,d,multi;
    void show()
    {

        cin>>c>>d;
        multi=c*d;
        cout<<"multiple:"<<multi<<"\n";

    }
};
int main()
{
  nasim ob;
  nusrat oc;
  ob.show();
  oc.show();

    return 0;
}
