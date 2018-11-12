#include <bits/stdc++.h>
using namespace std;
#define Max 100001
int multiply(int x, int res[], int resSize);
void factorial(int n)
{
    int res[Max];
    res[0]=1;
    int resSize=1;
    for(int x=2; x<=n; x++)
        resSize=multiply(x, res, resSize);
    cout << "Factorial of given number is ";
    for(int i=resSize-1; i>=0; i--)
        cout << res[i];
    cout << "\n";
}
int multiply(int x, int res[], int resSize)
{
    int carry = 0;
    for(int i=0; i<resSize; i++)
    {
        int prod = res[i]*x + carry;
        res[i] = prod%10;
        carry = prod/10;
    }
    while(carry)
    {
        res[resSize] = carry%10;
        carry = carry/10;
        resSize++;
    }
    return resSize;
}
int main()
{
    int n;
    while(cin >> n)
        factorial(n);
    return 0;
}
