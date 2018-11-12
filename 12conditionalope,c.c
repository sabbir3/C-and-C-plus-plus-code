#include<stdio.h>
int main()

{
    int a,b,c;
    a=50,b=10;
    c=((b++)*a)%555;
    printf("r1=%d\n",c--);
    printf("r2=%d\n",c++);
    c=c>100?++a:--b;
    printf("r3=%d\n",c);
    return 0;
}
