#include<stdio.h>

int main()
{
    int n=5,i=1;
    for( ; ; ){

        printf("%d X %d = %d\n",n,i,i*n);

        i++;
        if(i>10){

             break;
        }

    }
    return 0;
}
