#include<stdio.h>
int main()
{
    int a[100];

    int n,i=0,j,t,k,cas=1;

    while (scanf("%d",&n)!=EOF){
        for(i=0; i<n; i++)
        scanf("%d",&a[i]);
    for( i=0; i<n-1; i++){
    for(j=i+1; j<n; j++){
      if (a[i]>a[j]){
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
    printf("\n");
    }
    return 0;
}

