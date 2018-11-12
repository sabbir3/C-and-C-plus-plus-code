#include<stdio.h>
int main()
{
    int n, loc,i;
    scanf("%d", &n);
    int arr[n];
    printf("Enter your array:\n");
    for( i = 0; i<n; i++)
        scanf("%d", &arr[i]);
    printf("Enter tour location:\n");
    scanf("%d", &loc);
    printf("My new array first to %d:\n",loc);
    for( i=0; i<loc; i++)
        printf("%d ", arr[i]);
    printf("\n");
    printf("My new array %d to last:\n",loc);
    for( i=loc-1; i<n; i++)
        printf("%d ", arr[i]);
    printf("\n");
    return 0;
}
