#include<stdio.h>

int main()
{
    int n,i,k,j;
    int a[20][20];
    printf("enter number of node=");
    scanf("%d",&n);
    printf("enter matrix=\n");
    for(i=1; i<=n; i++){
        for(j=1; j<=n; j++){
            scanf("%d",&a[i][j]);
        }
    }

    for(k=1; k<=n; k++){
        for(i=1; i<=n; i++){
            for(j=1; j<=n; j++){

                if(a[i][j]==-1){

                    if(a[i][k]==-1 || a[k][j]==-1){
                        a[i][j]=a[i][j];
                    }
                    else{
                        a[i][j]=a[i][k]+a[k][j];
                    }
                }

                else{
                        if(a[i][j]>a[i][k]+ a[k][j])
                    a[i][j]=a[i][k]+ a[k][j];
                }
            }
        }
    }
    for(i=1; i<=n; i++){
        for(j=1; j<=n; j++){
            printf("%d\t",a[i][j]);
        }
        printf("\n");
    }


    return 0;
}
