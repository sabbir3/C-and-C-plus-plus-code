#include <bits/stdc++.h>
using namespace std;
int main()
{
    string a = "Nasim";
    cout << a[3] << endl;
    string b = a+a;
    cout << b << endl;
    b[5] = 'p';
    cout << b << endl;
    string c = b.substr(3, 4);
    cout << c << endl;
    return 0;
}
