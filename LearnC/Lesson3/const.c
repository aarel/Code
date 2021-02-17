/*
    This program demonstrates variables and constants.
*/

#include <stdio.h>

#define LAPS_PER_MILE 4

#define CURRENT_YEAR 2021

float miles_covered;
int laps_run, year_of_birth, current_age;

int main( void )
{
    printf("\nHow many laps did you run: \n\n");
    scanf("%d", &laps_run);

    printf("\nEnter your birth year: \n\n");
    scanf("%d", &year_of_birth);

    miles_covered = (float)laps_run/LAPS_PER_MILE;
    current_age = CURRENT_YEAR - year_of_birth;

    printf("\nYou ran %.2f miles.\n", miles_covered);
    printf("\nNot bad for someone turning %d this year!\n\n", current_age); 

    return 0;
}

