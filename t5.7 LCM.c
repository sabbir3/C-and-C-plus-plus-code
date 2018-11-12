#include<stdio.h>
///calculating LEAST COMMON MULTIPLE(LO SA GU):
int main()
{
    int a,b,gcd,lcm,x;

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
    lcm=(a*b)/gcd;
    printf("LEAST COMMON MULTIPLE=%d\n",lcm);
    return 0;
}

