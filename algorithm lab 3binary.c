#include<stdio.h>
int main()
{
    int a[10]={1,4,7,9,12,14,17,20,22};
    int end,start,mid,key,i,count=0;
    start=0;
    end=8;
    printf("search value:");
    scanf("%d",&key);
    do{
            count++;
        mid=((start+end)/2);

        if(a[mid]==key){


            printf("number of comparison:%d\n",count);
            printf("found at :%d\n",mid+1);
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
            printf("number of comparison :not found");

    }
    return 0;
}

