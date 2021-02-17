/*
    Write a statement to accept only an even integer value and print it.
*/

#include <stdio.h>

int num;
int user_input();

int main(void)
{
    user_input();

    return 0;
}
int user_input()
{
    printf("\nPlease enter an even number: ");
    scanf("%d", &num);

    if (num % 2 != 0)
    {
        printf("\nAccess denied. %d is not an even number.\n", num);
        user_input();
    }
    else
    {
        printf("\nNumber accepted. %d is an even number.\n\n", num);
    }

    return 0;
}
