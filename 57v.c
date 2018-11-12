#include<stdio.h>
int main()
{
    char str[10][25];
    int n,i;
    scanf("%d",&n);
     printf("before:\n");
    for(i=0;i<n;i++){

        scanf("%s",str[i]);
    }
      printf("\n\nafter:\n");
    for(i=n-1; i>=0; i--){

        printf("%s\n",str[i]);
    }
    return 0;
}
