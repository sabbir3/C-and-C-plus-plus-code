#include<stdio.h>
int main()
{
int t,i,n,ans,a,m;
while(scanf("%d",&t)==1)
{
i=1;
while(i<=t)
 {
 scanf("%d",&n);
 a=n*315+36962;
 m=a/10;
 ans=m%10;
 if(ans<0)
 ans=ans/(-1);
 printf("%d\n",ans);
 i++;
 }
}
return 0;
}
