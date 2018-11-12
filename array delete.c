#include<stdio.h>
int main()
{
 int n,i,loc,b;
printf("Enter your add value: ");
scanf("%d",&n);
int a[n];
    for(i=0;i<n;i++)
    {
      printf("Enter your value: ");
     scanf("%d",&a[i]);

    }
    printf("Enter Delete location: ");
    scanf("%d",&loc);

    for(i=loc;i<n;i++)
    {
      a[i-1]=a[i];
    }
    for(i=0;i<n-1;i++)
    {
    printf("\n a[%d]=%d",i,a[i]);
}
return 0;
}


