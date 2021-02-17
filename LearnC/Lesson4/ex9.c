/*
    This program evaluates whether a given age is an adult (21 or over) but not a senior citizen (60 or over).
*/

#include <stdio.h>

int main()
{
    int x;

    printf("\nEnter your age: \n\n");
    scanf("%d", &x);

    if (x < 21)
        printf("\nYou are a not an adult.\n\n");

    else if ( (x >= 21) && (x < 65 ) )
        printf("\nYou are an adult.\n\n");

    else
        printf("\nYou are a senior citizen\n\n.");

    return 0;

}
