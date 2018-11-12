#include<iostream>
#include<string>
using namespace std;

class box{

    public:
        void setd(string x){

          name=x;
        }
        string getd(){

        return name;

        }
    private:
        string name;

};
int main()
{
    box ob;
    ob.setd("sabbir");
    cout<<ob.getd();
    return 0;
}
