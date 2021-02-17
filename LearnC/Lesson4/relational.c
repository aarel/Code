/*
    Demonstrates evaluation of relational operators.
*/

#include <stdio.h>

int a;

int main()
{
    a = (5 == 5);    //  Evaluates to 1.
    printf("\nWhen a = (5 == 5)\n\na = %d\n\n", a);

    a = (5 != 5);
    printf("\nWhen a = (5 != 5)\n\na = %d\n\n", a);

    a = (12 == 12) + (5 != 1);    //  Evaluates to 1 + 1.
    printf("\nWhen a = (12 == 12) + (5 != 1)\n\na = %d\n\n", a);

    return 0;
}
