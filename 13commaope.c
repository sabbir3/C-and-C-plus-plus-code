#include<stdio.h>
int main()

{
    int a,b,comma;
    comma=(a=5,b=10,a=b);
    printf("%d",comma);
    return 0;

}
