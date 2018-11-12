#include<iostream>
using namespace std;

class a{

    public:
        char s1[30],s2[30];

        void s(){
        cout<<"ENTER STRING 1:";
        cin>>s1;
        cout<<"ENTER STRING 2:";
        cin>>s2;
        }
};
class b:virtual public a{

    public:
        int j,k,i=0,n=0, ln1, ln2;

        void t(){

         while(s1[i]!='\0'){

        i++;
    }
    ln1=i;
    while(s2[n]!='\0'){

       n++;
    }
   ln2=n;
   cout<<"\n\n\n";
    }

};
class c:virtual public a, public b{

    public:
        void ri(){

                cout<<"string 1 is="<<s1<<"\n";
                 //cout<<"length of s1="<<ln1<<"\n";
                cout<<"string 2 is="<<s2<<"\n";
                 //cout<<"length of s2="<<ln2<<"\n";
                cout<<"row according string 1="<<ln1<<"\n";
                cout<<"column according string 2="<<ln2<<"\n\n";
                cout<<"printing stars......."<<"\n\n";
                for(k=0; k<ln1; k++){
                    for(j=0; j<ln2; j++){
                    cout<<"*";
                    }
                    cout<<"\n";
                    }
               }

};
class d:public b{

    public:
        void ng(){
             cout<<"length of s1="<<ln1<<"\n";
             cout<<"length of s2="<<ln2<<"\n";
        }
};

int main()
{
    d ob;
   ob.s();
   ob.t();
   ob.ng();
   c oc;
   oc.s();
   oc.t();
   oc.ri();

   return 0;
}
