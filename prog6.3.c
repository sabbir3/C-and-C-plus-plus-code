#include<stdio.h>
#include<string.h>

int main()
{
    struct student{

        int id;
        char name[40];
    };

    struct student one;
    strcpy(one.name,"sabbir ahmed");
    one.id=162311003;

    printf("ID=%d\n",one.id);
    printf("Name=%s",one.name);

    return 0;
}
