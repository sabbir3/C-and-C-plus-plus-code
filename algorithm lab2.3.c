#include<stdio.h>

int main()
{
    int a[100][100];
    int i,j,n,row,col,x,y;
    while(scanf("%d",&n)!=EOF){

   for(j=0; j<n; j++){

        for(i=0;i<n;i++){
        a[j][i]=0;
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
        }


    }

        for(j=0; j<n; j++){
        for(i=0; i<n;i++)
        printf("%d\t",a[j][i]);
         printf("\n");

        }
    }

    return 0;
}

