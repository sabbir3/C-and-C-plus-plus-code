#include <bits/stdc++.h>
using namespace std;

int arr[20];
int fib(int n)
{
    arr[0]=0;
    arr[1]=1;
    if(arr[n]==0 && n>1)
        arr[n]=fib(n-1)+fib(n-2);
    return arr[n];
}
int main()
{
    int n;
    while(cin >> n)
        cout << fib(n) << "\n";
    return 0;
}
