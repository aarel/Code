/*
    Demonstrates a simple for statement.
*/

#include <stdio.h>
#define MAXCOUNT 20

int count;

int main(void)
{
    printf("\n");
    
    for (count = 1; count <= MAXCOUNT; count++)
    {
        if (count != 20)
            printf("%d, ", count);
        else
            printf("%d\n", count);
    }
    printf("\n");

    return 0;
}
