/* Demonstrates local variables */

#include <stdio.h>

int x, y;

void demo(void);

int main(void)
{
    printf("\nEnter a value for x: \n");
    scanf("%d", &x);
    printf("\nEnter a value for y: \n");
    scanf("%d", &y);

    printf("\nBefore calling demo(), x = %d and y = %d.\n", x, y);
    demo();
    printf("\nAfter calling demo(), x = %d and y = %d\n\n.", x, y);

    return 0;
}

void demo(void)
{
    /* Declare and initialize two local variables. */

    int x = 123, y = 321;

    /* Display their values. */

    printf("\nWithin demo(), x = %d and y = %d.\n", x, y);

}
