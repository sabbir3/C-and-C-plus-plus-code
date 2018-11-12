#include<iostream>
using namespace std;
class box{

private:
    int l,w,h;
    void p(){
    int volume;
    cin>>l>>w>>h;
    volume=l*w*h;
    cout<<"volume="<<volume;
    }
public:
    void pvolume();
};
void box::pvolume(){

    p();
}
int main()
{
    box ob;
    ob.pvolume();
    return 0;
}
