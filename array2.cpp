#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, m, p, loc, k, o, s, q;
    printf("Enter first array length:\n");
    scanf("%d",&n);
    printf("Enter second array length:\n");
    scanf("%d",&m);
    p = n+m;
    int arr1[n], arr2[m], arr3[p];
    printf("Enter first array a1:\n");
    for(int i=0; i<n; i++)
        scanf("%d", &arr1[i]);
    printf("Enter second array a1:\n");
    for(int i=0; i<m; i++)
        scanf("%d", &arr2[i]);
    for(int i=0; i<p; i++)
        arr3[i] = -1;
     printf("Enter Location:\n");
    scanf("%d",&loc);
    for(k=loc-1, o=0; k<(loc+m), o<m; k++, o++)
        arr3[k] = arr2[o];


    for(s=0, q=0; s<p; s++)
    {
        if(arr3[s]==-1)
        {
            arr3[s] = arr1[q];
            q++;
        }
    }
    printf("my new array:");

    for(int i=0; i<p; i++)
        printf("%d ", arr3[i]);
    printf("\n");
    return 0;
}

