/*
    Write a statement that assigns 123.456 to the 50th element in vals[50]
*/

#include <stdio.h>

long vals[50];

int main(void)
{
    vals[49] = 123456;

    printf("\nValue at element 50: %ld\n", vals[49]);

    return 0;
}
