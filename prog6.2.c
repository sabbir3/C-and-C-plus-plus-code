#include<stdio.h>

int main()
{
    struct student {

        int id;
        char*name;
    };

    struct student ob;

    ob.id=1;
    ob.name="sabbir ahmed";

    printf("ID=%d\n",ob.id);
    printf("Name=%s\n",ob.name);

    return 0;
}
