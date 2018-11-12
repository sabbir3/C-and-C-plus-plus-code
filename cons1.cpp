#include<iostream>
using namespace std;

class shape{

public:
    void setwidth(int w){
        width=w;
    }
    void setheight(int h){
        height=h;
    }
    protected:
        int width, height;

};

class rectangle:public shape{

public:
    int getarea(){

    return(height*width);
    }
};
int main()
{
    rectangle ob;
    int a;
    cout<<"width=";
    cin>>a;
    ob.setwidth(a);
    int b;
    cout<<"height=";
    cin>>b;
    ob.setheight(b);
    cout<<"the value is:"<<ob.getarea()<<endl;
    return 0;
}
