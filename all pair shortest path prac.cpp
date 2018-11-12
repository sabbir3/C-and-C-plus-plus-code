#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a[20][20],i,j,k,n;

    cout<<"enter number of node=";
    cin>>n;
    cout<<"enter the adjacency matrix="<<"\n";

    for(i=1; i<=n; i++){
        for(j=1; j<=n; j++){

            cin>>a[i][j];
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
                    a[i][j]=a[i][k]+ a[k][j];
                }
            }

            else{

                if(a[i][k]==-1 || a[k][j]==-1){

                    a[i][j]=a[i][j];
                }
                else{
                        if(a[i][j]>a[i][k]+ a[k][j])
                    a[i][j]=a[i][k]+ a[k][j];
                }
            }


        }
    }
}
            for(i=1; i<=n; i++){
               for(j=1; j<=n; j++){

                    printf("%d ",a[i][j]);
        }
        cout<<"\n";
    }



    return 0;
        }
