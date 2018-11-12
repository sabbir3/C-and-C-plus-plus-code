#include<iostream>
using namespace std;

class a{

    public:
        virtual void sabbir()=0;
};

class b:public a{

    public:
        void sabbir(){

        cout<<"i,m an open book"<<endl;
        }
};
class c:public a{

        public:
        void sabbir(){
        cout<<"life is a journey";
        }

};

int main()
{
    a*oa;
    b ob;
    c oc;
    oa=&ob;
    oa->sabbir();
    oa=&oc;
    oa->sabbir();
    return 0;
}
