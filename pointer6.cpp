#include<bits/stdc++.h>
using namespace std;

int main()
{
     int x=10,y;
    int *p,*q;

    p=&x;
    y=*p;
    *p=15;
    *q=20;
    cout<<"value of   x:"<<x;
    cout<<"value of   y:"<<y;
    cout<<"value of   *p:"<<*p;
    cout<<"value of   *q:"<<*q;

    return 0;
}
