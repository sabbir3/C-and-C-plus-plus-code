 #include <stdio.h>
 #include<string.h>

  int main()
  {

       char c[20],country[50];
       int n=0,length,i;
       printf("GET INPUT IN UPPERCASE=\n");

       while(scanf("%s",country)!=EOF){
       length=strlen(country);

      for(i=0; i< length; i++){

        if(country[i]>=65 && country[i]<=91){

            country[i]='a'+ (country[i] - 'A');

        }
      }
      n++;

      printf("case:%d=%s\n",n,country);
       }

       return 0;

  }

