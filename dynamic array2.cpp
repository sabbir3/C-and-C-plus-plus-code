#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> v(10, 5);
    v.pop_back();
    v.push_back(6);
    for(int i=0; i<v.size(); i++)
        cout << v[i] << endl;
    return 0;
}
