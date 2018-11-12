#include<iostream>
using namespace std;

class a{

    public:
        virtual void sabbir(){

        cout<<"virtual";

        }
};
class b:public a{

    public:

        void sabbir(){

        cout<<"sabbir ahmed";

        }

};
int main()
{
    a*oa;
    b ob;
    oa=&ob;
    oa->sabbir();
    return 0;

}

/*///Virtual Function
#include<iostream>
using namespace std;

class A
{
public:



   virtual void show()
    {
           cout<<"Area: \n";
    }
};
class B:public A
{
public:
     char s1[30],s2[30];

    int j,k,i=0,n=0, ln1, ln2;


    void show()
    {

    cin>>s1;
    while(s1[i]!='\0'){

        i++;
    }
    ln1=i;
    cout<<"ln_s1="<<ln1<<"\n";
    cin>>s2;
    while(s2[n]!='\0'){

       n++;
    }
   ln2=n;
   cout<<"ln_s2="<<ln2<<"\n";
   cout<<"\n\n\n";
   for(k=0; k<ln1; k++){

        for(j=0; j<ln2; j++){
        cout<<"*";
        }
        cout<<"\n";
   }



    }

};

int main()
{
      A*b;
      B d;

      b=&d;
      b->show();
}*/

