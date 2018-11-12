#include<stdio.h>

int main()
{
    struct student{

            int id;
            char name[40];
    };
    struct student one;

    scanf("%d",&one.id);
    scanf("%s[^\n]",one.name);

    printf("id=%d\n",one.id);
    printf("name=%s",one.name);

    return 0;
}
