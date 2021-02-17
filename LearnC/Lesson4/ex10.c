/*
||
||  This is a program with problems. The fix is detailed below.
||
*/

#include <stdio.h>

int x = 1;

int main(void)
{
    if (x == 1)
        printf("\nx is equal to 1\n\n");

    else
        printf("x is not equal to 1.\n\n");

    return 0;
}

/*
    The following errors occur with the current code:
    ex10.c:13:11: warning: using the result of an assignment as a condition without parentheses [-Wparentheses]
        if (x = 1)
            ~~^~~
    ex10.c:13:11: note: place parentheses around the assignment to silence this warning
        if (x = 1)
              ^
            (    )
    ex10.c:13:11: note: use '==' to turn this assignment into an equality comparison
        if (x = 1)
             ^
              ==
    ex10.c:16:5: error: use of undeclared identifier 'otherwise'
        otherwise
        ^
    1 warning and 1 error generated.
  
    These issues were corrected by adding the == operator to the if statement and removing the undeclared identifier
    otherwise and replacing it with an else statement.
*/
