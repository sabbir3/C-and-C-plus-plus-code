#include<stdio.h>

int main()
{
    char s1[30],s2[30];

    int j,k,i=0,n=0, ln1, ln2;

    scanf("%s",s1);
    while(s1[i]!='\0'){

        i++;
    }
    ln1=i;
    printf("ln_s1= %d\n",ln1);
    scanf("%s",s2);
    while(s2[n]!='\0'){

       n++;
    }
   ln2=n;
   printf("ln_s2= %d\n",ln2);
   printf("\n\n\n");
   for(k=0; k<ln1; k++){

        for(j=0; j<ln2; j++){
        printf("*");
        }
        printf("\n");
   }
    return 0;
}
