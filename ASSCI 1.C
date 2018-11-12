#include<stdio.h>

int main()
{
    int small_letter, capital_letter;

    printf("please enter a small letter: ");

    small_letter=getchar();
    capital_letter=small_letter-32;
    printf("the capital letter is :%c\n", capital_letter);

    return 0;
}
