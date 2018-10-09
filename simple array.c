#include <stdio.h>
int main()
{
    int i, sum=0, arr[10];
    for(i=0; i<10; i++)
        scanf("%d", &arr[i]);
    for(i=0; i<10; i++)
        sum = sum + arr[i];
    printf("%d\n", sum);
    return 0;
}
