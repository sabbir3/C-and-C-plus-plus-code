#include <bits/stdc++.h>
#include <string.h>
using namespace std;
int main()
{
    char s[100];
    int l;
    gets(s);
    l = strlen(s);
    printf("%s\n", s);
    sort(s, s+l);
    printf("%s\n", s);
    return 0;
}
