#include<stdio.h>
int main()
{
    int a[100][100];
    int i,j,n;
    while(scanf("%d",&n)!=EOF){
    for(j=0; j<n; j++){

        for(i=0;i<n;i++){
        scanf("%d",&a[j][i]);
        }
    }
     for(j=0; j<n; j++){
        for(i=0;i<n;i++)
        printf("%d\t",a[j][i]);
         printf("\n");

    }


    }
    return 0;
}
