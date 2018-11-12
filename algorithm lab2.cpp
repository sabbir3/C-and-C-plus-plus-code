#include <bits/stdc++.h>
using namespace std;
int main()
{
    int i, n, temp;
    scanf("%d", &n);
    int arr[n];
    for(i=0; i<n; i++)
        scanf("%d", &arr[i]);
    for(int m=0; m<n; m++)
    {
        for(i=0; i<n; i++)
        {
            if(arr[i]>=arr[i+1])
            {
                temp = arr[i];
                arr[i] = arr[i+1];
                arr[i+1] = temp;

            }
             for(int j=0; j<n; j++)
                    printf("%d ", arr[j]);
                printf("\n");
        }
         printf("\n");
    }

    return 0;
}
