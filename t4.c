#include<stdio.h>
int main()
{
    char x,y,X_plus_Y, X_minus_y,i,j;
    printf("enter the value of X_plus_Y=\n ");
    scanf("%d",&X_plus_Y);
    printf("enter the value of  X_minus_y=\n ");
    scanf("%d",&X_minus_y);

    x=((X_plus_Y+X_minus_y)/2);
    y=((X_plus_Y-X_minus_y)/2) ;

    printf("x=%d\ny=%d\n",x,y);

    return 0;
}
