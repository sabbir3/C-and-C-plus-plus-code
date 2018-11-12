#include<stdio.h>
#include<string.h>

int main()
{
    char s1[100],s2[100],s3[100];
    int l1,l2,l3;
    scanf("%s%s",s1,s2);
    l1=strlen(s1);
     l2=strlen(s2);

    printf("l1=%d\nl2=%d\n",l1,l2);
    printf("%s",strcat(s1,s2));
    return 0;
}
