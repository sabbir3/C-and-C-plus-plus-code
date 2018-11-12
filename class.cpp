#include<iostream>
using namespace std;
class box{

    private:
        void pvolume()
        {
            int l,w,h,volume;
            cin>>l>>w>>h;
            volume=l*w*h;
            cout<<"the volume is:"<<volume;
        }
    public:
        void sabbir();
};
void box::sabbir(){

        pvolume();
}
int main()

{
    box o;
    o.sabbir();
    return 0;
}
