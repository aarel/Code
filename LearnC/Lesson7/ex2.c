/*
    Write a scanf() statement to get a character,
    an unsigned decimal integer and another single character.
*/

#include <stdio.h>

int x;
char c1, c2;
int get_input();

int main(void)
{
    get_input();

    return 0;
}
int get_input()
{
    printf("\nEnter a letter, a number and a letter (i.e. b2b): ");
    scanf("%c %u %c", &c1, &x, &c2);
    printf("\nYou entered %c%u%c\n\n", c1, x, c2);

    return 0;
}
