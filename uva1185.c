#include<stdio.h>
int main()
{
    ///INCOMPLITE
    int n,k,p,a,i,b=0;

    scanf("%d",&a);
    for(i=0;i<=a;i++){

            b++;
    scanf("%d%d%d",&n,&k,&p);

        if(n<=n<=23&&1<=k<=n&&1<=p<=200){

            if(n==p)
                printf("case %d:%d\n",b,k);
            else if(n<k+p)
                printf("case %d:%d\n",b,k+p-n);
        }
       else{
        break;
       }
    }
    return 0;
}
