/*
    Turn the previous exercise into an executable program. Add a function
    that prints the values separated by tabs, in the array on a single line.
    Print only the values that were entered into the array.
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
    puts("\nEnter six even numbers or enter 99 to quit.");
    for (x=0; x < 6 && num != 99; x++)
    {
        printf("\nEnter an even number:");
        scanf("%d", &num);

        while (num % 2 == 1 && num != 99)
        {
            printf("\n%d is not an even number. Enter an even number: ", num);
            scanf("%d", &num);
        }
        array[x] = num;
    }
 
    for (x = 0; x < 6 && array[x] != 99; x++)
    {
        if (array[x] != 99 && x == 0)
        {
            printf("\nInput:\t%d", array[x]);
        }
        else if (array[x] != 99 && x < 4)
        {
            printf("\t%d", array[x]);
        }
        else
        {
            printf("\t%d\n\n", array[x]);
        }
    } 

    return 0;
}
