
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, loc;
    scanf("%d", &n);
    int arr[n];
    printf("Enter your array:\n");
    for(int i = 0; i<n; i++)
        scanf("%d", &arr[i]);
    printf("Enter your location:\n");
    scanf("%d", &loc);
    printf("My new array first to %d:\n",loc);
    for(int i=0; i<loc; i++)
        printf("%d ", arr[i]);
    printf("\n");
    printf("My new array %d to last:\n",loc);
    for(int i=loc-1; i<n; i++)
        printf("%d ", arr[i]);
    printf("\n");
    return 0;
}
