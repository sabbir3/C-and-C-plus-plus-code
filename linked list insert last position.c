#include<stdio.h>
#include<stdlib.h>
struct  node
{
    int data;
    struct node*link;
}*root,*temp,*ptr;
int main()
{
    root=(struct node*)malloc(sizeof(struct node*));
    root->data=NULL;
    root->link=NULL;
    char ch;
    while(ch != 'n' || ch =='N')
    {
        int item;
        printf("\nenter a data:");
        scanf("%d",&item);
        temp=(struct node*)malloc(sizeof(struct node*));
        temp->data=item;
        temp->link=root->link;
        root->link=temp;
        printf("Insert one more [Y for yes/N for no]\n");
        ch=getch();
    }
    printf("\ncontents of the linked list are:\n");
    ptr=root;
    while(ptr->link!=NULL)
    {
       ptr= ptr->link;
       printf("%d",ptr->data);
    }
    return 0;
}
