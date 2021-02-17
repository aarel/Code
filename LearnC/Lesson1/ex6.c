/*
    Recursion
    **NOTE: The Sam's Teach Yourself C... book replaces line 9 with the statement:

    printf("%c", 1);

    According to the book the expected output should be ten rows of ten smiley faces.
    On compiling and executing, the program output ten lines with what can only
    assumed be included, the ten spaces per line.

    %c is a character format specifier and expects a char instead int 1 is used in the statement. 
    To achieve the desired result, %c was replaced with %s, the string format specifier and
    a smiley face emoji string was added.
*/


#include <stdio.h>

int x, y;

int main(void)
{
    for ( x = 0; x < 10; x++, printf( "\n" ) )
        for ( y = 0; y < 10; y++ )
            printf( "%s", ":]" );

    return 0;
}
