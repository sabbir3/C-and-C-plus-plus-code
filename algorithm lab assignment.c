#include<stdio.h>

int main()
{
    int arr[100];
    long long int i,j,n,month,year;

    arr[1]=2;
    arr[2]=4;
    while(printf("ENTER NUMBER OF YEAR=")!=EOF){
    scanf("%lld",&year);

       month=12*year;
    for(i=3; i<=month; i++){

        arr[i]=arr[i-1]+arr[i-2];
        j=arr[i];

    }
    printf("THE TOTAL NUBER OF RABBIT=%lld AFTER %lld YEAR/%lld MONTH\n",j,year,month);
    }
    return 0;
}

