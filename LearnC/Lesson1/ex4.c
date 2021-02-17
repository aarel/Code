/*
    Program should print two strings but returns an error.
    The semicolon after declaration of main function causes the error.
    The compiler returns the following error:

    ex4.c:11:1: error: expected identifier or '('
    {
    ^
    With the semicolon after the main function, the compiler expects a new statement || before the braces.
*/

#include <stdio.h>

int main(void);
{
    printf( "Keep looking!" );
    printf( "You\'ll fint it!\n" );
    return 0;
}
