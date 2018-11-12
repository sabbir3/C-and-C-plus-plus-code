#include<stdio.h>
int main()
{
    int a,b,sum;
    while(    scanf("%d%d",&a,&b)){
            if( a==0&&b==0){
                    break;
                        }
    sum=a+b;
    printf("%d\n",sum);
    }
    return 0;
}
