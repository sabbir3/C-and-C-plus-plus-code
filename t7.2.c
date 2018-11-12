#include<stdio.h>
double add(double a,double b);
int main()
{
    double a,b,c;
    scanf("%d%d",&a,&b);
    c=add(a,b);
    printf("sum value=%lf\n",c);
}
double add(double a,double b){

    double sum;
    sum=a+b;
    return sum;

}
