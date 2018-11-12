#include<stdio.h>

int main()
{
    int a,b,c,d,e,f,g,h,i,j,k,l,A,B,C,D,E,F,G,H,I,J,K,L,M,n;
    double x,y,z;

    scanf("%lf",&x);

    a=x;
    b=a/100;
    c=a%100;
    d=c/50;
    e=c%50;
    f=e/20;
    g=e%20;
    h=g/10;
    i=g%10;
    j=i/5;
    k=i%5;
    l=k/2;
    n=k%2;

    y=x*100;

    A=y;
    B=A/100;
    C=A%100;
    D=C/50;
    E=C%50;
    F=E/25;
    G=E%25;
    H=G/10;
    I=G%10;
    J=I/5;
    K=I%5;
    L=K/1;
    M=K%1;

   printf ("NOTAS:\n");
    printf ("%d nota(s) de R$ 100.00\n",b);
    printf ("%d nota(s) de R$ 50.00\n",d);
    printf ("%d nota(s) de R$ 20.00\n",f);
    printf ("%d nota(s) de R$ 10.00\n",h);
    printf ("%d nota(s) de R$ 5.00\n",j);
    printf ("%d nota(s) de R$ 2.00\n",l);
    printf ("MOEDAS:\n");
    printf ("%d moeda(s) de R$ 1.00\n",n);
    printf ("%d moeda(s) de R$ 0.50\n",D);
    printf ("%d moeda(s) de R$ 0.25\n",F);
    printf ("%d moeda(s) de R$ 0.10\n",H);
    printf ("%d moeda(s) de R$ 0.05\n",J);
    printf ("%d moeda(s) de R$ 0.01\n",L);
    return 0;
}

