#include<stdio.h>


int main()
{
    int i,j,a,b,c;

    scanf("%d",&j);
    for(i=0; i<j; i++){

        scanf("%d",&a);
        scanf("%d",&b);


        if(a>b)
            printf(">\n");
        else if(a<b)
            printf("<\n");
        else
            printf("=\n");
    }
    return 0;
}
