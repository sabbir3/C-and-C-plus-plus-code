#include<stdio.h>
int main()
{
     int a[100];
     int i,j,k,cas=1,n,t;

     while(scanf("%d",&n)!=EOF){
        for(i=0; i<n; i++)
            scanf("%d",&a[i]);
        for( i=0; i<n; i++){
            for( j=i+1; j<n; j++){
                if(a[i]>a[j]){
                    t=a[i];
                    a[i]=a[j];
                    a[j]=t;
                }
            }
        }
        printf("case-%d:",cas);
        cas++;
        for(k=0; k<n; k++)
            printf(" %d",a[k]);
     }
     return 0;
}
