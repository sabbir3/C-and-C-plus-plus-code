#include<stdio.h>
///calculating GREAT POINT DIVISOR/(GO SA GU):
int main()
{
    int a,b,gcd,x;

    scanf("%d%d",&a,&b);
    if(a<b){
        x=a;
    }
    else{

        x=b;
    }
    for(; x>=1; x--){

        if(a%x==0 && b%x==0){

            gcd=x;
            break;
        }
    }
    printf("GREAT POINT DIVISOR=%d\n",gcd);
    return 0;
}
