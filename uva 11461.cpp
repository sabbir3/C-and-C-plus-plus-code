#include<bits/stdc++.h>

using namespace std;

int main()
{
    int a,b,c,n,i,j,sum;
    float x,y,z,k;

    while(scanf("%d%d",&n,&j)!=EOF && (n!=0||j!=0)){

             sum=0;

    for(i=n; i<=j; i++){

    a=sqrt(i);
    x=(float) i;
    y=sqrt(x);
    c=ceil(y);
    b=c*c;

    if(i==b){

        sum++;
    }
    }
    printf("%d\n",sum);
   }
    return 0;
}
