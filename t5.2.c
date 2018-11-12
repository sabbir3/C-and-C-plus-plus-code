#include<stdio.h>

double equation(){

     double a1,a2,b1,b2,c1,c2,x,y,d;

    printf("a1=\n");
    scanf("%lf",&a1);
     printf("a2=\n");
    scanf("%lf",&a2);
     printf("b1=\n");
    scanf("%lf",&b1);
     printf("b2=\n");
    scanf("%lf",&b2);
     printf("c1=\n");
    scanf("%lf",&c1);
     printf("c2=\n");
    scanf("%lf",&c2);

    d=(a1*b2-a2*b1);

    if((int)d==0){

        printf("value of x and y cannot be determined !\n");
    }
    else{

    x=((b2*c1-b2*c2)/d);
    y=((a1*c2-a2*c1)/d);

    printf("x=%lf\ny=%lf\n",x,y);
    }

}

int main()
{

    equation();

    return 0;
}
