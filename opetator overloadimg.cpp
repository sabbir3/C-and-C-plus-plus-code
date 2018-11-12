#include<iostream>
using namespace std;

class a{

private:
    int count;
public:
    a(){

    count=50;
    }
    a operator ++(){

    count=count+10;
    }
    void display(){

    cout<<"count ="<<count;
    }
};
int main()
{
    a oa;
    ++oa;
    oa.display();
    return 0;
}
