#include<iostream>
using namespace std;
class box{

        int l,w,h;
        public:
                void getdata();
                void pvolume();
};
void box::getdata(){

    cin>>l>>w>>h;
}
void box::pvolume(){

    int volume;
    volume=l*w*h;
    cout<<"the volume is:"<<volume;
}
int main()
{
    box ob;
    ob.getdata();
    ob.pvolume();
    return 0;
}
