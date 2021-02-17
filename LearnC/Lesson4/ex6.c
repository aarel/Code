/*
    This is a rewrite of a nested if statements using a single if statement and logical operators.

    **NOTE: This exercise is incorrect in the book as well.
    The condition is if x is less than 1 and if x is greater than 10.
    The exercise has no solution unless the conditions are altered.
    The condition has been changed to check if x is less than 10 and greater than 1. 
*/

#include <stdio.h>

int x;

int main()
{
    printf("\nEnter x: \n\n");
    scanf("%d", &x);

    if ( (x > 1) && (x < 10) )
        printf("\nmatch\n\n");
    else
        printf("\nno match\n\n");

    return 0;
}
