#include<stdio.h>

int main()
{
    int n,avg,k,i,sum=0,ck=0;

    while(scanf("%d",&n)!=EOF&&n!=0){

            ck++;
    for(i=0; i<n; i++){
        scanf("%d",&k);
        sum=sum+k;
    }
      avg=sum/n;

     if(k!=avg)
        printf("set #%d\n",ck);
        printf("the minimum number of move is %d\n",k);

    }


    return 0;
}
