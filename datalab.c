#include<stdio.h>


int sum(int a, int b);

int main()
{
    int b,c;
    scanf("%d%d",&b,&c);

    sum(b,c);

    printf("sum=%d",sum(b,c));

}

int sum(int a, int b){


    return a+b;
}
