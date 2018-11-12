#include<iostream>
using namespace std;

class box{
    public:

     pvol();
};
box::pvol()
    {

     int volume , l,w,h;
    cin>>l>>w>>h;
    volume=l*w*h;
    cout<<"the volume is:"<<volume<<endl;

    }

int main()
{
    box ob;
    ob.pvol();
    return 0;
}
