#include<stdio.h>
int main()

{
    int n=1;
   // scanf("%d",&n);
    while( n<=100)
        {
        printf("%d\n",n);
        n++;
        if(n>=10)
        {
            break;
        }
    }
    return 0;
}
