#include<stdio.h>
int main()

{  int b,n;
scanf("%d",&n);
b=fact(n);
printf("%d",b);
return 0;

}
int fact(int n)
{
    if (n==1||n==0)
    { return 1;
    }
    else return n*fact(n-1);

}

