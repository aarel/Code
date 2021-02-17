/*
    Write a program that puts random numbers into a two-dimensional array
    that is 5 by 4. Print the values onscreen. Use the rand() function.
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int random_array[5][4];
int x, y;
void get_random_array();

int main(void)
{
    srand (time (NULL));
    get_random_array();

    return 0;
}
void get_random_array()
{
    for (x = 0; x < 5; x++)
    {
        for (y = 0; y < 4; y++)
        {
           random_array[x][y] = rand();
        }
    }

    for (x = 0; x < 5; x++)
    {
        for (y = 0; y < 4; y++)
        {
            printf("\nrandom_array[%d][%d] = ", x, y);
            printf("\n%d\n", random_array[x][y]);
        }
    }

    printf("\nPress Enter to continue, Ctrl-C to quit.\n");

    getchar();
}
