#include<bits/stdc++.h>
using namespace std;

int main()
{
    int p[20],d[20],x[20],np[20],nx[20];
    int n,i,j,pos,sum=0;

    printf("how many element you wanna work with=");
    cin>>n;

    for(i=1; i<=n; i++){
        printf("enter p%d=",i);
       cin>>p[i];
       printf("enter d%d=",i);
       cin>>d[i];
       x[i]=i;

    }

    for(i=1; i<=n; i++){
        for(j=1; j<=n-1; j++){

            if(p[j]<p[j+1]){

                swap(p[j],p[j+1]);
                swap(d[j],d[j+1]);
                swap(x[j],x[j+1]);
            }
        }
    }

    for(i=1; i<=n; i++){

        np[i]=-1;
        nx[i]=-1;
    }

    for(i=1; i<=n; i++){

        pos=d[i];
        if(np[pos]==-1){

            np[pos]=p[i];
            nx[pos]=x[i];
            sum+=p[i];
        }
        else{
            pos--;
        while(pos>0){
            if(np[pos]==-1){

            np[pos]=p[i];
            nx[pos]=x[i];
            sum+=p[i];
        }
        else
            pos--;

        }
      }
    }
        cout<<"total profit="<<sum<<"\n";
         printf("sequence=\n");
        for(i=1; i<=n; i++){

            if(nx[i]>-1){
                cout<<nx[i]<<"\n";
            }
        }

    return 0;
}
