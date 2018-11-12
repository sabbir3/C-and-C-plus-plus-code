#include<stdio.h>

int main()
{
    int fact,i,j,n,k;

    //scanf("%d",&j);
    //for(k=0; k<=j; k++){
    while(scanf("%d",&n)!=EOF){

            fact=1;
        for(i=1; i<=n; i++){
            fact=fact*i;
        }
        printf("factorial of%d=%d\n",n,fact);
    }
   // }
    return 0;
}
