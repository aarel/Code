/*
    Demonstrate logical order for some of C's operators.
*/

#include <stdio.h>

/*
    Initialize variables note that c is not less than d,
    which is one of the conditions to test for.
    Therefore, the program should evaluate to false.
*/

int a = 5, b = 6, c = 5, d = 1;
int x;

int main(void)
{
    //  Evaluate the expression without parentheses

    x = a < b || a < c && c < d;
    printf("\n\nWithout parentheses this expression evaluates to %d\n\n", x);

    /*
        ** NOTE ** This expression returns the following warning:
      
            logical_order.c:24:24: warning: '&&' within '||' [-Wlogical-op-parentheses]
                x = a < b || a < c && c < d;
                                   ^

        The program executes successfully.
    */

    //  Evaluate the expression with parentheses

    x = (a < b || a < c) && c < d;
    printf("\n\nWith parentheses this expression evaluates to %d\n\n", x);

    return 0;
}
