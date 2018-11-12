#includestdio.h
int main()
{
    int a[100][100];
    int i,j,n,row,col,x,y;
    scanf(%d,&n);

   for(j=0; jn; j++){

        for(i=0;in;i++){
        a[j][i]=0;
        }
   }

    row=0;
    col=(n2);
    a[row][col]=1;

    for(i=2; i=nn; i++){
    x=row;
    y=col;
    row--;
    col++;
        if(row0){
              row=n-1;
        }
        if(col=n){
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

        for(j=0; jn; j++){
        for(i=0;in;i++)
        printf(%dt,a[j][i]);
         printf(n);

        }

    return 0;
}
