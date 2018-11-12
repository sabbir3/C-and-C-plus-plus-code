#include<stdio.h>

int main()
{
    struct student{

    int id;
    char name[40];

    };

    struct student one;
    one.id=1;
    one.name="sabbir ahmed";
    printf("id: %d\n",one.id);
    printf("name: %s\n",one.name);

    return 0;
}
