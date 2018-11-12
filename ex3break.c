#include<stdio.h>
int main()
{
    int n;
    for( n=1 ; n<=100 ; n++){
        printf("%d\n",n);
        if(n>=10){
            break;
        }

    }
    return 0;
}
