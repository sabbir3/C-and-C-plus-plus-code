#include<stdio.h>
#include<math.h>
int main()
{


      int j,m,n,i,a,check;
      double N,t,p;


      printf("enter start number=\n");
      scanf("%d",&m);
      printf("enter end number=\n");
      scanf("%d",&n);
      printf("from the number %d to the number %d the prime numbers are=\n",m,n);


      for(j=m; j<n; j++){


      check=1;
      for(i=2;i<j; i++){
      if(j%i==0)
      check=0;
      }
      if(check==1)
        printf("%d\n",j);
      }

      return 0;
}
