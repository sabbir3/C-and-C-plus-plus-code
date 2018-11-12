#include<bits/stdc++.h>
#define f(x) x*x*x -2*x -5
//define f(x) pow(e,x)*x -1
using namespace std;

int main()
{
    float a,b,c,e=0.001;
    float f1,f2,f3;
    cout<<"enter a and b=";
    cin>>a>>b;

    cout<<"\n";
    int i=0;

    do{

        f1=f(a);
        f2=f(b);
        c=(a+b)/2;
        f3=f(c);

        if(f1*f3<0){

            b=c;
        }
        else{

            a=c;
        }
        i++;
        printf("Row %d",i);
        printf("Root =%f",c);
        printf("f = %f\n",f3);
    }
    while(fabs(f3)>=e);
    return 0;
}

