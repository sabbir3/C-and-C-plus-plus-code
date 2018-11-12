#include<iostream>
using namespace std;

class fruit{

    public:

             int n,woter,suger,orange, apple,t;
      void sa(){

        cout<<"number of fruits=";
        cin>>n;
        cout<<"other ingredient..."<<"\n";
        cout<<"water in kg="<<"\n";
        cin>>woter;
        cout<<"suger in kg="<<"\n";
        cin>>suger;
        t=(woter+suger);
        cout<<"total quantity="<<t<<"\n";
      }

};
class app: public fruit{

       public:
           char name[30];
            int price,q;
           void bb()
           {
           cout<<"name=";
           cin>>name;

           cout<<"quantity="<<"\n";
           cin>>q;
           cout<<"price=";
           cin>>price;
           cout<<"the price is="<<price;

           }

};

class orange: public fruit{

    public:
        char o[30];
        int q,price;
          void i(){
           cout<<"name=";
           cin>>o;
           cout<<o;
           cout<<"quantity="<<"\n";
           cin>>q;
           cout<<"price=";
           cin>>price;
           cout<<"quantity="<<price<<"\n";

           }

};
class juice: public orange{

    public:

        void r(){
        int p;
        char name[20];

        cout<<"name=";
        cin>>name;
        cout<<"quantity="<<"\n";
        cin>>p;
      cout<<"quantity="<<p<<"\n";

        }
};
int main()
{
    juice ob;
    ob.sa();
    ob.r();
    ob.i();
    app ab;
    ab.bb();
}

