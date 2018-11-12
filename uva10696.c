#include<stdio.h>
int main()
{
    int n,a,b;

   while(scanf("%d",&n)&&n!=0){

        if(n>100){
            a=n-10;
        }
        else
            a=91;
         printf("f91(%d)=%d\n",n,a);
   }

    return 0;
}
