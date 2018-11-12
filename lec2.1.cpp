
#include<iostream>
using namespace std;

class box{


   int l,w,h;
public:
   // int l,w,h;

    void get();
    void print();
};

void box::get(){

cin>>l>>w>>h;

}
void box::print(){

int volume;
volume=l*w*h;
cout<<"volume="<<volume;
}
int main()
{
    box ob;
    ob.get();
    ob.print();
    return 0;
}
