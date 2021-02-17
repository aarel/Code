/*
  This program is the same program from ex2.c written cleaner and more readable.
*/

#include <stdio.h>

int x, y;

int main()
{
    printf("Enter two numbers: ");
    scanf("%d %d", &x, &y);

    printf("\n %d is greater.\n\n", (x > y) ? x : y);
    
    return 0;
}
