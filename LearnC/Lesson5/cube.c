/*
    Demonstrates a simple function.
*/

#include <stdio.h>

long cube(long x);

long input, answer;

int main(void)
{
    printf("\nEnter a number to find the cube value: \n\n");
    scanf("%ld", &input);
    answer = cube(input);

    //  Note: %ld is the format specifier for a long integer.

    printf("\nThe cube of %ld is %ld.\n\n", input, answer);

    return 0;
}

//  Function cube() - Calculates the value of an integer cubed.

long cube(long x)
{
    long x_cubed;

    x_cubed = x * x * x;

    return x_cubed;
}
