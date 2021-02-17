/*
    Demonstrates unary operator prefix and postfix modes.
*/

#include <stdio.h>

int a, b;

int main()
{
    a = b = 0; // Sets a and b to 0 to start.
    
    /*
        Start with the incremental operator.
        Print the value, decrementing each time.
        Use prefix mode for b and postfix mode for a.
    */

    printf("\n\nCount up!\n\n");
    printf("Post     Pre\n\n");
    
    printf("%d      %d\n", a++, ++b);
    printf("%d      %d\n", a++, ++b);
    printf("%d      %d\n", a++, ++b);
    printf("%d      %d\n", a++, ++b);
    printf("%d      %d\n", a++, ++b);

    printf("\n\nCurrent values of a and b:\n\n");
    printf("%d,     %d\n\n", a, b);

    printf("\n\nCount down!\n\n");
    printf("\nPost     Pre\n\n");

    printf("\n%d     %d", a--, --b);
    printf("\n%d     %d", a--, --b);
    printf("\n%d     %d", a--, --b);
    printf("\n%d     %d", a--, --b);
    printf("\n%d     %d\n\n", a--, --b);
    
    printf("\n\nCurrent values of a and b:\n\n");
    printf("%d,     %d\n\n", a, b);

    return 0;
}
