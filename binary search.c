#include<stdio.h>
int main()
{
    int a[7] = {3,9,10,21,33,55};
    int i,start,end,mid,key;
    start = 0;
    end = 5;
    key = 3;
    do{
        mid = (int) ((start+end)/2);
        if(a[mid] == key)
        {
            printf("Find at %d\n",mid+1);
            break;
        }
        else if(a[mid] > key)
        {
            end = mid-1;
        }
        else
        {
            start = mid+1;
        }
        printf("Start:%d\tEnd:%d\tmid:%d\tkey:%d\ta[mid]:%d\n",start,end,mid,key,a[mid]);
    }
    while(start<=end);
        if(start>end)
        printf("Failed\n");
    return 0;
}
