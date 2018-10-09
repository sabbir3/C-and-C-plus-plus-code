#include <bits/stdc++.h>
using namespace std;
int main()
{
    set<int> s;
    s.insert(5);
    s.insert(5);
    s.insert(5);
    s.insert(5);
    //cout << s.count(5) << endl;
    //s.erase(5);
    //cout << s.count(5) << endl;
    cout << s.find(5) << endl;
    //s.erase(7);
    //cout << s.count(7) << endl;
    return 0;
}
