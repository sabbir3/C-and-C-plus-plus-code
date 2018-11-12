#include<iostream>
using namespace std;

class sabbir{

        int a,b;
    public:

        sabbir(int i, int j){a=i; b=j;}
        friend class safiq;
};
class safiq{

    public:
        int namsim(sabbir x);

};
int safiq::namsim(sabbir x){

return x.a>x.b? x.a:x.b;

}
int main()
{
    sabbir ob(10,20);
    safiq os;
    cout<<"the biggest number="<<os.namsim(ob);
    return 0;
}
