#include<stdio.h>

int main()
{
    int i,n,j,t,k;

    int a[102],b[102];



    for(i=1; i<=100; i++){

        scanf("%d",&a[i]);
        b[i]=i;
    }

    for(i=1; i<=100; i++){

       for(j=1; j<=100-1; j++){

        if(a[j]<a[j+1]){

            t=a[j+1];
            a[j+1]=a[j];
            a[j]=t;

            t=b[j+1];
            b[j+1]=b[j];
            b[j]=t;

        }
       }
    }
    printf("%d\n%d\n",a[1],b[1]);


    return 0;
}
