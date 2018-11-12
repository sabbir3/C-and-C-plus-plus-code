#include <stdio.h>
#include <stdlib.h>
/*  Merges two sub arrays of arr[]
    First sub array is arr[l...m]
    Second sub array is arr[m+1....r]
*/

void Merge(int arr[], int l, int m, int r)
{
    int i, j, k;
    int n1 = m - l + 1;
    int n2 = r - m;
    int L[n1], R[n2]; ///Creating temporary arrays

    ///Copy data to temporary arrays
    for(i=0; i<n1; i++)
        L[i] = arr[l+i];
    for(j=0; j<n2; j++)
        R[j] = arr[m+1+j];
///  Merge the temporary arrays into arr[l....r]
    i = 0;  /// Initial index of first sub array
    j = 0;  /// Initial index of second sub array
    k = l;  /// Initial index of merged sub array

    while(i<n1 && j<n2)
    {
        if(L[i]<=R[j])
        {
            arr[k] = L[i];
            i++;
        }
        else
        {
            arr[k] = R[j];
            j++;
        }
        k++;
    }
    /// Copy the remaining elements of L[], if there are any
    while(i<n1)
    {
        arr[k] = L[i];
        i++;
        k++;
    }
    /// Copy the remaining elements of R[], if there are any
    while(j<n2)
    {
        arr[k] = R[j];
        j++;
        k++;
    }
}
///  l is for left index and r is right of the sub array of arr to be sorted
void mergeSort(int arr[], int l, int r)
{
    if(l<r)
    {
        ///Same as (l+r)/2, but avoids overflow for large l and r
        int m = l + (r-l)/2;
        ///Sort first and second halves
        mergeSort(arr, l, m);
        mergeSort(arr, m+1, r);
        Merge(arr, l, m, r);
    }
}
int main()
{
    int i, n;
    printf("Enter the number of number you want to sort: ");
    scanf("%d", &n);
    int arr[n];
    for(i=0; i<n; i++)
        scanf("%d", &arr[i]);
    printf("Given array is\n");
    for(i=0; i<n; i++)
        printf("%d ", arr[i]);
    printf("\n");
    mergeSort(arr, 0, n-1);
    printf("Sorted array is\n");
    for(i=0; i<n; i++)
        printf("%d ", arr[i]);
    printf("\n");
    return 0;
}
