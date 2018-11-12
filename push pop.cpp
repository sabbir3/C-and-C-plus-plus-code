#include <bits/stdc++.h>
#define MAX 5
int top, status;

void push(int stak[], int item)
{
    if(top = (MAX-1))
        status = 0;
    else
    {
        status = 1;
        ++top;
        stak[top] = item;
    }
}
int pop(int stak[])
{
    int ret;
    if(top == -1)
    {
        ret = 0;
        status = 0;
    }
    else
    {
        status = 1;
        ret = stak[top]
        --top;
    }
    return ret;
}
void display(int stak[])
{
    int i;
    printf("\nThe Stack is: ");
    if(top == -1)
        printf("empty");
    else
    {
        for(i = top; i>=0; --i)
            printf("\n-----\n|%3d\n------", stak[i]);
    }
    printf("\n");
}
int main()
{
    int stak[MAX], item;
    int ch;
    clrscr();
    top = -1;
    return 0;
}
