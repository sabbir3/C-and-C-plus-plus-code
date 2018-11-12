#include<stdio.h>

int main()

{
    int a,b;

    while(scanf("%d%d",&a,&b)!=EOF){

   a=a+b;
   b=a-b;
   a=a-b;
    printf("%d %d\n",a,b);
    }
    return 0;
}
