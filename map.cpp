#include <bits/stdc++.h>
using namespace std;
int main()
{
    map<string, int> m;
    m["banana"] = 4;
    m["monkey"] = 3;
    m["Shawon"] = 1;
    cout << m["Shawon"] << endl;
    cout << m["Sabbir"] << endl;

    if(m["banana"])
        cout << "banana exists" << endl;
    else
        cout << "banana does not exist" << endl;
    return 0;
}
