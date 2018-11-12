#include<stdio.h>
int main()
{
    int a[100],i,n,key,cas=1;
    while(scanf("%d",&n)!=EOF){
    for(i=0; i<n; i++)
     scanf("%d",&a[i]);
    scanf("%d",&key);
    for(i=0;i<n; i++){
        if(a[i]==key ){
                //loc=i+1;
        break;

        }
    }
    printf("case-%d:",cas);
    cas++;

    if( n==i)
            printf("no\n");

    else
                printf("%d\n",i+1);

    }
    return 0;

}
