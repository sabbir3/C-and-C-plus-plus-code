#include<stdio.h>
int main()
{
     int a[5];
     int i,t,j,n,k;

     while(scanf("%d",&n)){

            for(i=0; i<n; i++)
            scanf("%d",&a[i]);


     for( i=0; i<n; i++){

     for ( j=i+1; j<n; j++){

        if(a[i]>a[j]){
        t=a[i];
        a[i]=a[j];
        a[j]=t;
      }
      for( k=0; k<n; k++)
       printf("%d",a[k]);
        printf("\n");
      }
        printf("\n");
     }
     }
     return 0;
    }
