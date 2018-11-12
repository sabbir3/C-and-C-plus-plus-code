#include <iostream>
using namespace std;
class A
{
public:
	//A() {}
	virtual void output()=0;
};
class B : public A
{
public:
	//B() {}
void output() {
 cout << "   Attempted re-write." << endl; }
};
class C : public A{
public:
	//C() {}
	void output() {
    cout << "   Hi" << endl;
	}
};
int main()
{
      A* ptr;
      B b_object;
      C c_object;
       ptr = &b_object;
       ptr->output();
//=> Base class 'output' member function
        ptr = &c_object;
        ptr->output();
      return 0;
}

