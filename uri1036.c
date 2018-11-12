#include<stdio.h>

int main()
{
    double a,b,c,d,e,f,g,F,h,r1,r2;

    scanf("%lf%lf%lf",&a,&b,&c);

    d=((b*b)-4*a*c);
    e=sqrt(d);
    f=(e-b);
    F=(-e-b);
    g=2*a;
    r1=(f/g);
    r2=F/g;
    if(d<1 || g==0){

        printf("Impossivel calcular\n");
    }

    else{

        printf("R1 = %.5lf\n",r1);
        printf("R2 = %.5lf\n",r2);

    }
    return 0;
}

