#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, i;
    printf("Enter number: ");
    scanf("%d", &n);
    int arr[n];
    for(i=0; i<n; i++)
        scanf("%d", &arr[i]);
    printf("Given array:\n");
    for(i=0; i<n; i++)
        printf("%d ", arr[i]);
    printf("\n");

    sort(arr, arr+n);
    printf("After sorting the array:\n");
    for(i=0; i<n; i++)
        printf("%d ", arr[i]);
    return 0;
}
