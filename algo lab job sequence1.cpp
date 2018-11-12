#include<bits/stdc++.h>
using namespace std;


int main()
{
    int n,i,j,t,pos,sum=0;
    int p[20],d[20],r[20],x[20],se[20];
    cout<<"how many element you wanna work with="<<"\n";
    cin>>n;

    for(i=1; i<=n; i++){

       printf("enter p%d=",i);
       cin>>p[i];
       printf("enter d%d=",i);
       cin>>d[i];
       x[i]=i;

    }

    for(i=1; i<=n; i++)
    {
        for(j=1; j<=n-1; j++)
        {
            if(p[j] < p[j+1])
            {
                swap(p[j], p[j+1]);
                swap(d[j], d[j+1]);
                swap(x[j], x[j+1]);

            }
        }
    }

    for(i=1; i<=n; i++){

        printf("p:%d d=%d\n",p[i],d[i]);
    }


    for(i=1; i<=n; i++){

        r[i] = -1;
        se[i]= -1;
    }
    for(i=1; i<=n; i++){


        pos=d[i];


        if(r[pos]==-1){

            r[pos]=p[i];
            se[pos]=x[i];
            sum+=p[i];

        }

        else{

            pos--;
            while(pos>0){
                    if(r[pos]==-1){

                r[pos]=p[i];
                se[pos]=x[i];
                sum+=p[i];


                    }

                    else
                        pos--;

            }
        }
    }
                printf("profit=%d\n",sum);

                printf("job sequence=\n");


               for(i=1; i<=n; i++){

                    if(se[i]>-1){
                    printf("%d\n",se[i]);
                    }
                }

    return 0;




}
