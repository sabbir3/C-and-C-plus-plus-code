#include<stdio.h>
int main()


{    int a=50,b=10,c;
     c=((b++)*a)%555;
     printf("result1=%d\n",c--);
     printf("result2=%d\n",c++);
c=c>100?++a:--b;
     printf("result3=%d\n",c);
     return 0;
}
