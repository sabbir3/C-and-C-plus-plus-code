#include<stdio.h>
int main()
{
    int a[100],i,n,key,loc,cas=1;
   while( scanf("%d",&n)!=EOF){
    for(i=0; i<n; i++)
    scanf("%d",&a[i]);
    scanf("%d",&key);
   // ck=0;
    for(i=0;i<n;i++){
        if(key==a[i]){
               // ck=1;
                loc=i+1;
                break;
       }
    }
    printf("case-%d:",cas);
    cas++;
    if(i==n)
        printf(" no \n");
    else
     printf("%d\n",loc);
   }
   return 0;
}
