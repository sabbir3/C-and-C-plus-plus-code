#include <stdio.h>
int main()
{
    int i, n, sum=0;
    double avg;
    scanf("%d", &n);
    int arr[n];
    for(i=0; i<n; i++)
    {
        scanf("%d", &arr[i]);
        sum = sum + arr[i];
    }
    avg = sum/(double)n;
    printf("%.2lf\n", avg);
    return 0;
}
