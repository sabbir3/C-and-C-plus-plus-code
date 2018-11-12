#include<stdio.h>

int main()
{
    float a,b,c,e;

    scanf("%f%f%f",&a,&b,&c);

    if(a+b>c && a+c>b && b+c>a){

        printf("Perimetro = %.1f\n",a+b+c);
    }

    else{

        e=((a+b)/2)*c;
        printf("Area = %.1f\n",e);
    }

    return 0;

}
