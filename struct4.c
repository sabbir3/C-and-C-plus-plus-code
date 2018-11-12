#include<stdio.h>
#include<string.h>

struct nametype{

    char first[40];
    char last[40];
};

struct studenttype{

    int id;
    struct nametype name;
};

int main()
{
    struct studenttype student[5];

    int i,n=5;
    for(i=0; i<n; i++){

        printf("enter the id for student %d:",i+1);
        scanf("%d",&student[i].id);
        printf("enter the first name of student id %d:",i+1);
        scanf("%s",student[i].name.first);
        printf("enter the last name of student id %d:",i+1);
        scanf("%s",student[i].name.last);
        printf("\n");
    }

    printf("Output=\n");

    for(i=0; i<n; i++){

        printf("student id:%d\n",student[i].id);
        printf("name:%s %s\n",student[i].name.first,student[i].name.last);
    }

    return 0;
}
