#include<iostream>
using namespace std;

class as{
    public:
  int a,b,c;
  as(){
      //int a,b,c;
   cout<<"a=";
   cin>>a;
    cout<<"b=";
   cin>>b;
    cout<<"c=";
   cin>>c;
  }
  ~as(){
     // int a,b,c;

    if(a>b && a>c){

        cout<<"largest value a="<<a;
    }
    else if(b>a && b>c){

        cout<<"largest value b="<<b;
    }
    else
        cout<<"largest value c="<<c;

}
};
int main()
{
    as ob;
    return 0;
}
