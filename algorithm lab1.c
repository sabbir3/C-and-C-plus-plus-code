#include<stdio.h>
int main()
{
     int a[5];
     int i,t,j,n,k;

     while(scanf("%d",&n)){

            for(i=0; i<n; i++)
            scanf("%d",&a[i]);


     for( i=0; i<n-1; i++){

     for ( j=0; j<n-1-i; j++){

        if(a[j]>a[j+1]){
        t=a[j];
        a[j]=a[j+1];
        a[j+1]=t;
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
