#include<stdio.h>

int main()
{
    int A,B,C,D,sum1,sum2;

    scanf("%d%d%d%d",&A,&B,&C,&D);

            sum1=C+D;
            sum2=A+B;
        if(D>0 && A%2==0 && B>C && D>A && sum1>sum2)

                printf("Valores aceitos\n");
            else
                printf("Valores nao aceitos\n");


    return 0;
}
