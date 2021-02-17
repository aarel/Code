/*
    Write a statement to get an integer value and print it.
*/

#include <stdio.h>

int num;

int main(void)
{
    printf("\nEnter a number: ");
    scanf("%d", &num);

    printf("\nNumber = %d\n\n", num);

    return 0;
}
