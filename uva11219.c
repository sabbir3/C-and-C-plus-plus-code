#include<stdio.h>

int main()
{
    int d,m,y,d1,d2,m1,m2,y1,y2,i,n,k=0;

        while(scanf("%d",&n)!=EOF){
                for(i=1; i<=n; i++){
            scanf("%d/%d/%d",&d1,&m1,&y1);
            scanf("%d/%d/%d",&d2,&m2,&y2);
            printf("\n");

            if(d1>d2 && m1>m2 && y1>y2){
                y=y1-y2;
                printf("Case #%d: %d",i,y);

            }
            else if(y1<=y2){
                printf("Case #%d: Invalid birth date",i);
            }
            else if(y1-y2>130){
                printf("Case #%d: Check birth date",i);
            }
            else if(d1-d2==-1&&m1==m2&&y1-y2==1){
                printf("Check #%d: %d",i,k);
            }

        }
        }
    return 0;
}
