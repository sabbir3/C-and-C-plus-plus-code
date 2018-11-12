#include<stdio.h>

int main()
{
    int start,end,i,temp;

    scanf("%d%d",&start,&end);
    if(start>end){
        temp=start;
        start=end;
        end=temp;
    }
      for(i=start; i<=end; i++){

            printf("%d ",i);
        }


    return 0;
}
