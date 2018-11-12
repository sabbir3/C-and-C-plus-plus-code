#include<stdio.h>

int fun(int n){

    if(n==0)

        return 1;
    else

        return n*fun(n-1);
}

int main()
{
    int a;
    while(scanf("%d",&a)!=EOF){
         printf("%d\n",fun(a));

    }

   return 0;
}
