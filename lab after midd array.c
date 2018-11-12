#include<stdio.h>
int main()
{
    int n, m, sum, loc, k, a, s, q,i;
    int arr1[100], arr2[100], arr3[100];
    printf("Enter first array length:\n");
    scanf("%d",&n);
    printf("Enter second array length:\n");
    scanf("%d",&m);
    sum = n+m;
    printf("Enter first array a1:\n");
    for( i=0; i<n; i++)
        scanf("%d", &arr1[i]);
    printf("Enter second array a2:\n");
    for(i=0; i<m; i++)
        scanf("%d", &arr2[i]);
    for(i=0; i<sum; i++)
        arr3[i] = -1;
     printf("Enter Location:\n");
    scanf("%d",&loc);
    for(k=loc-1, a=0; k<(loc+m), a<m; k++, a++)
        arr3[k] = arr2[a];


    for(s=0, q=0; s<sum; s++)
    {
        if(arr3[s]==-1)
        {
            arr3[s] = arr1[q];
            q++;
        }
    }
    printf("my new array:");

    for(i=0; i<sum; i++)
        printf("%d ", arr3[i]);
    printf("\n");
    return 0;
}

