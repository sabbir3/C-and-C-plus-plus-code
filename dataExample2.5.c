#include<stdio.h>
#include<math.h>
int main()
{
    double a,b,c,d,x1,x2;
    scanf("%lf%lf%lf",&a,&b,&c);

    d=(b*b)-(4*a*c);

    if(d<0)

        printf("Imaginary Number\n");
    else
    {
        x1=(-b+d)/2*a;
        x2=(-b-d)/2*a;
        printf("solve of the equation:x1=%.2lf and x2=%.2lf\n",x1,x2);
    }
    return 0;
}
