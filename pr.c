#include<stdio.h>

int main()
{
    int i,a,check;


    check=1;
    while(scanf("%d",&a)!=EOF){
    for(i=2;i<a; i++){
    if(a%i==0)
    check=0;
    }
    if(check==1)
        printf("prime\n");
    else
    printf("not prime\n");
    }
    return 0;
}
