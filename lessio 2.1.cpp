#include<iostream>
using namespace std;
class box{

    public:
            int l,w,h,volume;
            void pvolume(){

           // cin>>l>>w>>h;
            volume=l*w*h;
            cout<<"the volume is:"<<volume;
            }
};
int main()
{
    box ob;
    ob.l=2,ob.w=2,ob.h=2;
    ob.pvolume();
    return 0;

}
