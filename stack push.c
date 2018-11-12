#include<stdio.h>

int main()
{
    int a[10];
    int max=5;
    int i=0,k;
    printf("Enter a number: ");
    scanf("%d",&a[i]);
    i++;
    if(i==max)
    {
        printf("overflow\n");
    }
    else
    {
        printf("New data: ");
        scanf("%d",&a[i]);
    }
    for(k=0; k<=i; k++)
    {
        printf("%d\n",a[k]);
    }
    return 0;
}
