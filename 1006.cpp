#include <bits/stdc++.h>
using namespace std;
int arr[10001];

int a, b, c, d, e, f;
int fn( int n ) {
    memset(arr, -1, sizeof(arr));
    if( n == 0 ) arr[0] = a;
    if( n == 1 ) arr[1] = b;
    if( n == 2 ) arr[2] = c;
    if( n == 3 ) arr[3] = d;
    if( n == 4 ) arr[4] = e;
    if( n == 5 ) arr[5] = f;
    else if(arr[n]!=-1)
        return arr[n];
    else
    {
        arr[n] = ( fn(n-1) + fn(n-2) + fn(n-3) + fn(n-4) + fn(n-5) + fn(n-6) );
        return arr[n];
    }
}
int main() {
    int n, caseno = 0, cases;
    scanf("%d", &cases);
    while( cases-- ) {
        scanf("%d %d %d %d %d %d %d", &a, &b, &c, &d, &e, &f, &n);
        printf("Case %d: %d\n", ++caseno, fn(n) % 10000007);
    }
    return 0;
}
