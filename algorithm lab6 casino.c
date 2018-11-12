#include<stdio.h>
#include<string.h>

int main()
{
    double n,m,i,j,sum=0,p;
    char am[10];

    printf("ENTER AMOUNT=\n");
     scanf("%lf",&m);
    printf("ENTER HOW MANY TIME U WANNA PLAY=\n");
    scanf("%lf",&n);
    for(i=1; i<=n; i++){


        printf("ENTER W or L(COMBINATION)=\n");
        scanf("%s",am);

    if(am[0]=='W' || am[0]=='w'){

        m=m*2;
        j=m;
        printf("WIN=%.2lf\n",j);
    }

    else if(am[0]=='L' || am[0]=='l'){

        m=j-((80*j)/100);
        p=m;
        j=p;
        printf("LOSE=%.2lf\n",p);
    }

    }

    return 0;
}
