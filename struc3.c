#include<stdio.h>


    struct nametype{


        char first[40];
        char last[40];
    };

    struct student{

        int id;
        struct nametype name;
    };

int main()
{
    struct student one;

    scanf("%d",&one.id);
    scanf("%s",one.name.first);
    scanf("%s",one.name.last);

    printf("%d\n",one.id);
    printf("%s\n",one.name.first);
    printf("%s\n",one.name.last);

    return 0;
}
