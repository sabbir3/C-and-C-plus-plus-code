#include<stdio.h>

int main()
{
    struct student{

            int id;
            char name[30];
    };

    struct student one;

    one.id=3;
    strcpy(one.name,"Sabbir Ahmed");

    printf("ID=%d\n",one.id);
    printf("name= %s\n",one.name);

    return 0;
}
