#include<iostream>
#include<math.h>
using namespace std;

#define f(x) x*x*x + x*x -1 // equation
#define g(x) 1/sqrt(x+1)

int main()
{
    float x0,x1,e=1;
    cout<< "input the initial guess:";
    cin>>x0;
    while(e>0.005)
    {
        x1=g(x0);//working formula
       // e=fabs((x1-x0)/x1);
        e=x1-x0;
        x0=x1;
         cout<< "\nthe root of the equation ="<<x0;
    }
   // cout<< "\nthe root of the equation ="<<x0;
    return 0;
}
