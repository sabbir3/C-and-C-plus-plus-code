#include<stdio.h>

int main()
{
    int n,i,j,row,col,x,y;
    int a[50][50];


    while(printf("enter the number=")!=EOF){

            scanf("%d",&n);

    for(i=0;i<n;i++){
        for(j=0; j<n; j++){
            a[i][j]=0;
        }
    }

    row=0;
    col=(n/2);
    a[row][col]=1;

    for(i=2; i<=n*n; i++){

        x=row;
        y=col;
        row--;
        col++;
        if(row<0){
            row=n-1;
        }
        if(col>=n){
            col=0;
        }
        if(a[row][col]==0){

            a[row][col]=i;
        }
            else{
                a[x+1][y]=i;
                row=x+1;
                col=y;
                if(row==n){
                    row=0;
                }
            }

    }

    for(i=0;i<n;i++){
        for(j=0; j<n; j++){
            printf("%d\t",a[i][j]);
        }
        printf("\n");
    }
    }

    return 0;

}
