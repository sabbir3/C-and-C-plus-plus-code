#include<stdio.h>

int main()
{
    float n,a,d,e,f,g,h,i,j,k,l,m,p;
    int b,c,o,q,r,s,t,u,v,w,x,y,z,zz,bb,cc,mm,pp,qq,rr,ll,dd;

    scanf("%f",&n);


    printf("NOTAS:\n");
    if(n>100){

        a=n/100;
        b=n/100;
        c=b*100;
        d=(n-c);
        printf("%d nota(s) de R$ 100.00\n",b);
    }
    else if(d>=50){

        a=d/50;
        o=d/50;
        q=b*50;
        e=(d-q);
        printf("%d nota(s) de R$ 50.00\n",o);
    }
     else if(e>=20){

        a=e/20;
        r=e/20;
        s=b*20;
        f=(e-s);
        printf("%d nota(s) de R$ 20.00\n",r);
    }
    else if(f>=10){

        a=f/10;
        ll=f/10;
        dd=b*10;
        g=(f-dd);
        printf("%d nota(s) de R$ 10.00\n",b);
    }
    else if(g>=5){

        a=g/5;
        t=g/5;
        u=b*5;
        h=(g-u);
        printf("%d nota(s) de R$ 5.00\n",t);
    }
    else if(h>=2){

        a=h/5;
        v=h/5;
        w=b*5;
        i=(h-w);
        printf("%d nota(s) de R$ 2.00\n",v);
    }


        printf("MOEDAS:\n");

        if(i>=1.00){

        a=i/1;
        x=i/1;
        y=b*1;
        j=(i-y);
        printf("%d moeda(s) de R$ 1.00\n",x);
    }
    else if(j>=0.50){

        a=j/0.50;
        z=j/0.50;
        zz=b*0.50;
        k=(j-zz);
        printf("%d moeda(s) de R$ 0.50\n",z);
     }
     else if(k>=0.25){

        a=k/0.25;
        bb=k/0.25;
        cc=b*0.25;
        l=(k-cc);
        printf("%d moeda(s) de R$ 0.25\n",bb);
     }
      else if(l>=0.05){

        a=l/0.05;
        mm=l/0.05;
        pp=b*0.05;
        m=(l-pp);
        printf("%d moeda(s) de R$ 0.05\n",mm);
     }
     else if(m>=0.01){

        a=m/0.05;
        qq=m/0.05;
        printf("%d moeda(s) de R$ 0.01\n",qq);
     }


    return 0;
}
