
#include <stdio.h>
#include <stdlib.h>
#include <conio.h> ///for clear screen
#include <string.h> ///for string
#include <windows.h> ///for Sleep() function

void logo();
void menu();

void add_student();
void search_student();
void edit_student();
void delete_student();
void close();

struct student
{
    int id;
    char name[30];
    char adrs[20];
    char father_name[25];
    char mother_name[25];
    char Semester[5];
    char dept[50];
    long unsigned int phone_no;
};
char another;

int main()
{
    system("cls");
    logo();
    menu();

    return 0;
}
void menu()
{
    char choice;
    printf("\t1. Add Student Records");
    printf("\n\t2. Search Student Records");
    printf("\n\t3. Edit Student Records");
    printf("\n\t4. Delete Student Records");
    printf("\n\t5. Exit");
    printf("\n\n\tEnter Your Choice: ");

    scanf(" %s", &choice);

    switch(choice)
    {
    case '1':
        add_student();
        break;

    case '2':
        search_student();
        break;

    case '3':
        edit_student();
        break;

    case '4':
        delete_student();
        break;

    case '5':
        close();
        break;

    default:
        system("cls");
        printf("\n\n\n\n\n\n\n\t\t\t*******************\n");
        printf("\t\t\t* Wrong Selection *");
        printf("\n\t\t\t*******************");
        Sleep(1000);
        main();

        break;
    }
}

void add_student()
{
    FILE *fp; ///create a file
    struct student add;

    system("cls"); ///clear screen
    printf("\n\t**********************\n");
    printf("\t* Add Student Record *\n");
    printf("\t**********************\n\n");

    fp = fopen("StudentRecord.txt","ab+"); ///open file for add data
    if(fp == NULL)
    {
        printf("Error in Opening file\nMake sure your file is not write protected");

    }
    else
    {
        printf("\tStudent ID: ");
        scanf("%d", &add.id);

        printf("\tStudent Name: ");
        fflush(stdin);
        gets(add.name);

        printf("\tFather Name: ");
        fflush(stdin);
        gets(add.father_name);

        printf("\tMother Name: ");
        fflush(stdin);
        gets(add.mother_name);

        printf("\tDepartment: ");
        fflush(stdin);
        gets(add.dept);

        printf("\tSemester: ");
        fflush(stdin);
        gets(add.Semester);

        printf("\tAddress: ");
        fflush(stdin);
        gets(add.adrs);

        printf("\tPhone Number  : ");
        scanf("%ld", &add.phone_no);

        fwrite(&add, sizeof(add),1, fp); ///write all data in file

        system("cls");
        printf("\n\n\n\n\n\tThe Record is Successfully Added\n\n");
    }
    fclose(fp);
    printf("\tWould You Like to Add Another Record?????");
    printf("\n\tPress Y for Yes and N for No.........");

    another=toupper(getch());
    if(another=='Y')
    {
        add_student();
    }
    else
    {
        main();
    }
}

void search_student()
{
    int n, found = 0;
    struct student search;
    FILE *fp;

    system("cls");
    printf("\n\t*************************\n");
    printf("\t* Search Student Record *\n");
    printf("\t*************************\n\n");

    printf("\tEnter ID to Search: ");
    scanf("%d", &n);

    fp = fopen("StudentRecord.txt","rb"); ///for open file
    while(fread(&search,sizeof(search),1,fp) == 1) ///scan data from file
    {
        if(n==search.id)
        {
            found = 1;
            break;
        }
    }
    if(found == 1)
    {
        ///print all data if searching item found;
        system("cls");
        printf("\n\n\n\tStudent ID: %d", search.id);
        printf("\n\tStudent Name: %s", search.name);
        printf("\n\tFather Name: %s", search.father_name) ;
        printf("\n\tMother Name: %s", search.mother_name);
        printf("\n\tDepartment: %s", search.dept);
        printf("\n\tSemester: %s", search.Semester);
        printf("\n\tAddress: %s", search.adrs);
        printf("\n\tPhone Number  %ld: ", search.phone_no);
    }
    else
    {
        system("cls");
        printf("\n\n\n\tSorry, No Record Found in the Database\n\n");
        printf("\tPress any Key to go Back Menu.....");
        getch();
        main();
    }
    fclose(fp); ///close file

    printf("\n\n\tWould You Like to Search Another Student ID?????");
    printf("\n\tPress Y for Yes and N for No.........");

    another=toupper(getch()); ///get a char and convert it in a upper case
    if(another=='Y')
    {
        search_student();
    }
    else
    {
        main();
    }

}

void edit_student()
{
    int n, found = 0;
    struct student edit;
    system("cls");
    FILE *fp;

    printf("\n\t***********************\n");
    printf("\t* Edit Student Record *\n");
    printf("\t***********************\n\n");

    printf("\tEnter ID to Modify: ");
    scanf("%d", &n);

    fp = fopen("StudentRecord.txt","rb+");

    while(fread(&edit, sizeof(edit),1,fp) == 1)
    {
        if(n==edit.id)
        {
            printf("\n\tStudent ID: ");
            scanf("%d", &edit.id);

            printf("\tStudent Name: ");
            fflush(stdin);
            gets(edit.name);

            printf("\tFather Name: ");
            fflush(stdin);
            gets(edit.father_name);

            printf("\tMother Name: ");
            fflush(stdin);
            gets(edit.mother_name);

            printf("\tDepartment: ");
            fflush(stdin);
            gets(edit.dept);

            printf("\tSemester: ");
            fflush(stdin);
            gets(edit.Semester);

            printf("\tAddress: ");
            fflush(stdin);
            gets(edit.adrs);

            printf("\tPhone Number  : ");
            scanf("%ld", &edit.phone_no);

            fseek(fp,-sizeof(edit), SEEK_CUR);
            fwrite(&edit,sizeof(edit), 1, fp);
            found = 1;
            break;
        }
    }
    if(!found)
    {
        printf("\n\n\n\n\tNo Record Found...............");
        printf("\n\tPress any Key to Go Back Menu.........");
        getch();
        main();
    }
    fclose(fp);
    printf("\n\n\tWould You Like to Search Another Student ID?????");
    printf("\n\tPress Y for Yes and N for No.........");

    another=toupper(getch());
    if(another=='Y')
    {
        edit_student();
    }
    else
    {
        main();
    }
}

void delete_student()
{

    int n;
    struct student dlte;
    FILE *fp, *temp;

    system("cls");
    printf("\n\t*************************\n");
    printf("\t* Delete Student Record *\n");
    printf("\t*************************\n\n");
    printf("\n\tEnter ID to Delete: ");
    scanf("%d", &n);

    fp = fopen("StudentRecord.txt","rb");
    temp = fopen("temp.txt", "wb");

    while(fread(&dlte, sizeof(dlte),1,fp) == 1)
    {
        if(n==dlte.id)
        {
            fwrite(&dlte,sizeof(dlte),1,temp);
        }
    }
    fclose(fp);
    fclose(temp);
    remove("StudentRecord.txt");
    rename("temp.txt","StudentRecord.txt");

    printf("\n\tThe record is successfully deleted.......");
    printf("\n\n\tWould You Like to Delete Another Record?????");
    printf("\n\tPress Y for Yes and N for No.........");

    another=toupper(getch());
    if(another=='Y')
    {
        delete_student();
    }
    else
    {
        main();
    }
}

void close()
{
    int i;
    system("cls");
    printf("\n\n\n\t\t");
    for(i=1; i<=37; i++)
    {
        printf("\xB2");
    }
    printf("\n\t\t\xB2\t\t\t\t    \xB2\n");
    printf("\t\t\xB2 Thank You for Using this Software \xB2");
    printf("\n\t\t\xB2\t\t\t\t    \xB2\n\t\t");
    for(i=1; i<=37; i++)
    {
        printf("\xB2");
    }
    printf("\n\n\n");
}

void logo()
{
    int i;
    printf("\n\t");
    for(i=1; i<29; i++)
    {
        printf("\xB2");
    }
    printf("\n\t\xB2\t\t           \xB2");
    printf("\n\t\xB2   Our University    \xB2\n");
    printf("\t\xB2  Student Record System   \xB2\n");
    printf("\t\xB2\t\t           \xB2\n\t");
    for(i=1; i<29; i++)
    {
        printf("\xB2");
    }
    printf("\n\n\n");
}

