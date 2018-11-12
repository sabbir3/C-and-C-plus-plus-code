#include <stdio.h>



  int main()
  {
        int c,o,x;

        printf("Enter your array:\n");
        scanf("%d",x);

    printf ("STACK OPERATION: \n");
    while (o)
    {
        printf ("\n");
        printf ("      1   PUSH  \n");
        printf ("      2   POP \n");

        printf ("\n");

        printf ("Enter your choice\n");
        scanf    ("%d", &c);
        switch (c)
        {
        case 1:
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

            break;
        case 2:
            {


             int n,i,loc,b;
printf("Enter your array size: ");
scanf("%d",&n);
int a[n];
printf("Enter your value: \n");
    for(i=0;i<n;i++)
    {

     scanf("%d",&a[i]);
    }
    printf("Enter your location: ");
    scanf("%d",&loc);
    loc=loc-1;
    printf("Enter your add value:");
    scanf("%d",&b);

    for(i=n+1;i>loc;i--)
    {

         a[i]=a[i-1];

    }
    a[loc]=b;
    for(i=0;i<=n;i++)
    {
    printf("\n a[%d]=%d",i,a[i]);
}

}

            break;
        }
return 0;

    }
  }
