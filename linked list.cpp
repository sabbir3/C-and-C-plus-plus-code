#include<bits/stdc++.h>
using namespace std;

struct node{

    int data;
    struct node *next;

}*start=NULL;


void creat(){
    char ch;
    do{

        struct node *new_node, *current;

        new_node=(struct node*)malloc(sizeof(struct node));
        cout<<"Enter the data :   ";
        cin>>new_node->data;
        new_node->next=NULL;

        if(start==NULL)
        {
            start=new_node;
            current=new_node;
        }
        else
        {
            current->next=new_node;
            current=new_node;

        }
        printf("Do you want to creat another :");
        ch=getche();
    }while(ch!='n');
}

void display()
{
    struct node *new_node;
    printf("the linked list :  n");
    new_node=start;

    while(new_node!=NULL)
    {
        printf("%d--->",new_node->data);
        new_node=new_node->next;
    }
    printf("NULL");
}

void main()
{
    creat();
    display();
}

