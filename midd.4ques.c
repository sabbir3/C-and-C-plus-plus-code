#include<stdio.h>
int main()


{  int a=20,i;
   for(i=5; i<=a;i++)
   {  printf("%d",i++);
      i=i+5;
      a=a-5;
   }

   printf("\n%d %d",i,a);
   return 0;
}
