#include<stdio.h>

int main()
{
    float salary,ip,news,in;
    char ch='%';

    scanf("%f",&salary);

    if(salary>0 && salary<=400.00){

        ip=15;
        in=((15*salary)/100);
        news=salary+in;

    }
     else if(salary>400.00 && salary<=800.00){

        ip=12;
        in=((12*salary)/100);
        news=salary+in;

    }
    else if(salary>800.00 && salary<=1200.00){

        ip=10;
        in=((10*salary)/100);
        news=salary+in;

    }
    else if(salary>1200.00 && salary<=2000.00){

        ip=7;
        in=((7*salary)/100);
        news=salary+in;

    }
    else if(salary>1200.00){

        ip=4;
        in=((4*salary)/100);
        news=salary+in;
    }

        printf("Novo salario: %.2f\n",news);
        printf("Reajuste ganho: %.2f\n",in);
        printf("Em percentual: %.f %c\n",ip,ch);


    return 0;
}
