#include<stdio.h>
#include<conio.h>
#include<math.h>
#include<stdlib.h>

#define E 0.00001
#define g(x) 2-x*x

int main()
{
 float x1,x2;

 printf("Enter the initial guess : ");
 scanf("%f",&x1);

 Lbl:
  x2=g(x1);
  if(((x2-x1)/x2)<E)
  {
   printf("The root is %f",x2);
   goto End;
  }
  else
      {
    x1=x2;
    goto Lbl;
   }
 End:
  getch();
  return(0);
}

