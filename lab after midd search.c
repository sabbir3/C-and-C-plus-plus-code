#include<stdio.h>
int main()
{
    int a[100];
    int end,start,mid,key,n,j,t,k,i,l;
    start=0;

    scanf("%d",&n);

            for(l=0; l<n; l++){
                scanf("%d",&a[l]);
            }
     for( i=0; i<n; i++){

     for ( j=i+1; j<n; j++){

        if(a[i]>a[j]){
        t=a[i];
        a[i]=a[j];
        a[j]=t;

      }
    }
     }
       for( k=0; k<n; k++)
       printf("%d ",a[k]);

        end=n;
    printf("\nkey:");
    scanf("%d",&key);
    do{
        mid=((start+end)/2);
       // printf("start:%d\tend:%d\tmid:%d\tkey:%d\ta[mid]:%d\t\n",start,end,mid,key,a[mid]);
        if(a[mid]==key){
            printf("found at :%d\n",mid);
            break;
        }
        else if( a[mid]>key){
            end=mid-1;
        }
        else
        {
            start=mid+1;
        }
    }
        while( start<=end);
        if( start>end){
            printf("not found");

    }

    return 0;
}


