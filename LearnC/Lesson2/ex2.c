/*
    The Components of a Program
*/

#include <stdio.h>

void display_line(void);

int main(void)
{
    printf("\n");
    display_line();
    printf("\n\n Teach Yourself C In One Hour a Day!\n\n");
    display_line();
    printf("\n\n");
    
    return 0;
}

void display_line(void)
{
    int counter;

    for( counter = 0; counter < 37; counter++)
        printf("*" );
}

/*
    Which line(s) contain statements?
    13 through 17, 19, 30, 32, 33

    Which line(s) contain variable definitions?
    30

    Which line(s) contain function prototypes?
    9

    Which line(s) contain function definitions:
    28 through 34

    Which line(s) contain comments?
    1 through 5, 22 through 26, 36 through 40
*/
