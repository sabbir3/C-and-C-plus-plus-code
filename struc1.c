#include<stdio.h>

int main()
{
    struct student{

            int id;
            char* name;

    };

    struct student one;

    one.id=1;
    one.name="sabbir ahmed";

    printf("ID=%d\n",one.id);
    printf("name=%s\n",one.name);

    return 0;
}
