/*
    Modify exercise 4 so that it returns avalues until the number 99 is entered
    or until six even values have been entered. Store the numbers in an array.
*/

#include <stdio.h>

int array[6], x, num;

int get_input();

int main(void)
{
    get_input();

    return 0;
}
int get_input()
{
    /*
        Loop 6 times or until the last entered element is 99
    */

    for (x=0; x < 6 && num != 99; x++)
    {
        puts("\nEnter an even number or enter 99 to quit: ");
        scanf("%d", &num);

        while (num % 2 == 1 && num != 99)
        {
            printf("\n%d is not an even number. Please enter an even number: ", num);
            scanf("%d", &num);
        }
        array[x] = num;
    } 
    /*
        now print them out
    */
    for (x = 0; x < 6 && array[x] != 99; x++)
    {
        printf("\nThe value entered is %d \n\n", array[x]);
    }

    return 0;
}
