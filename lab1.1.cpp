#include<iostream>
using namespace std;

class box{

public:
  void pvolume(){

  p();
  }
private:
    void p(){

    double volume,l,w,h;
    cin>>l>>w>>h;
    volume=l*w*h;
    cout<<volume;
    }
};
int main()
{
    box ob;
    ob.pvolume();
    return 0;
}
