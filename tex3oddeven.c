#include<stdio.h>
int main()
{
    int num,red;
    num=5;
    //scanf("%d",&num);
    red=num%2;
    if( red==0){
        printf("the number is even\n");
    }
    else{
        printf("the number is odd");
    }
    return 0;

}
