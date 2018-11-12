#include<stdio.h>
int main()
{

    int i,b,n,a[10],sum=0;

    scanf("%d",&n);


    for(i=0; i<n; i++){

        scanf("%d",&a[n]);

        if(a[0]>a[i+1]){

            sum++;

        }
      printf("%d\n",sum);
    }

    return 0;
}
