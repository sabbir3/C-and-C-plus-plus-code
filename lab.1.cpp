#include<iostream>
using namespace std;

class box{

 private:
     int l,w,h,vol;
    // cin>>l>>w>>h;
     void pvolume(){
      cin>>l>>w>>h;
     vol=l*w*h;
     cout<<"volume is="<<vol;
     }
 public:
    void p();
};
void box::p(){

pvolume();

}
int main()
{
    box ob;

    ob.p();
    return 0;
}
