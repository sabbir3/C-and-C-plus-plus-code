#include<stdio.h>
int main()
{
    int n=5;
    int i;
    int a=0,b=1,c;
    for(i=1; i<=n; i++){
         printf("d\n",a);
         c=a+b;
         a=b;
         b=c;
    }
    return 0;
}
