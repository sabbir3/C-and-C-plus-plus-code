#include<stdio.h>

int main()
{
    int i,n,j,t;

    int a[10],b[10];

    for(i=1; i<=3; i++){

        scanf("%d",&a[i]);
       b[i]=a[i];

    }

    for(i=1; i<=3; i++){

       for(j=1; j<=3-1; j++){

        if(a[j]>a[j+1]){

            t=a[j+1];
            a[j+1]=a[j];
            a[j]=t;


        }
       }
    }

    for(i=1; i<=3; i++){

         printf("%d\n",a[i]);

    }

    printf("\n");

    for(i=1; i<=3; i++){


          printf("%d\n",b[i]);
    }



    return 0;
}

