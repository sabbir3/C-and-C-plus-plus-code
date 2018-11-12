#include<stdio.h>
int add(int a, int b);
void sab();

int main()
{
    int a,b,c;
    float x,y,z,v;

    scanf("%d%d",&a,&b);
    c=add(a,b);
    printf("%d\n",c);
    sab();

}
int add(int a, int b){

    int sum;
    sum=a+b;

    return sum;

}

void sab(){

    float d,e,f;
     scanf("%f%f%f",&d,&e,&f);
    float average;

    average=((d+e+f)/3);

    printf("%f\n",average);

}

