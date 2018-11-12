#include<stdio.h>
int main()
{
    int a[100],i,n,loc,key,ck,cas=1;

    while(scanf("%d",&n)!=EOF){
            printf("input %d\n",n);
            for(i=0; i<n; i++)
            scanf("%d",&a[i]);
            scanf("%d",&key);
            printf("find the number:%d\n",key);
            ck=0;
            for(i=1; i<n; i++){
                if(a[i]==key){
                    ck=1;
                    loc=i+1;
                }
            }
            printf("case %d:",cas);
            cas++;
            if(ck==1)
                printf("location:%d",loc);
            else
                printf("location :no");
    }
    return 0;
}
