
#include<bits/stdc++.h>
//#define f(x) pow(x,2.2) -69
#define f(x) x*x*x -2*x -5
using namespace std;

int main()
{
    float a,b,c,e=0.001;
    float f1,f2,f3;
    cout<<"enter a and b=";
    cin>>a>>b;

    cout<<"\n";


    do{
        int i=0;
        f1=f(a);
        f2=f(b);
        c=(a*f2-b*f1)/(f2-f1);
        f3=f(c);

        if(f1*f3<0){

            b=c;

        }
        else{

            a=c;

        }
        i++;
        printf("Row= %d",i);
        printf(" a=  %f",a);
        printf(" b=  %f",b);
        printf(" f(a)= %f",f1);
        printf(" f(b)= %f",f2);
        printf(" Root= %f",c);
        printf(" f(c)= %f\n",f3);
    }
    while(fabs(f3)>=e);
    return 0;
}


