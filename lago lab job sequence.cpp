#include<bits/stdc++.h>
using namespace std;

int main()
{
    int i,j,n,pos,sum=0;
    int p[30],d[20],x[20],se[20],r[20];

    printf("how many element you wanna work with=");
    scanf("%d",&n);

    for(i=1; i<=n; i++){

        cout<<"enter p"<<i<<"=";
        cin>>p[i];
        cout<<"enter d"<<i<<"=";
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

        printf("p:%d d=%d\n",p[i],d[i]);
    }

    for(i=1; i<=n; i++){

        se[i]=-1;
        r[i]=-1;
    }

    for(i=1; i<=n; i++){

        pos=d[i];
        if(r[pos]==-1){

            r[pos]=p[i];
            sum+=p[i];
            se[pos]=x[i];
        }
        else{

            pos--;

            while(pos>0){

                if(r[pos]==-1){

            r[pos]=p[i];
            sum+=p[i];
            se[pos]=x[i];
                }
                else{
                    pos--;
                }
            }
        }
    }

    cout<<"profit="<<sum<<endl;

    for(i=1; i<=n; i++){

        if(se[i]>-1){
           cout<<se[i]<<endl;
        }
    }

    return 0;
}
