/*
    This is a program to calculate which year a person will be a certain age.
*/

#include <stdio.h>

int year1, year2;

char name, choice;

int target_age;

int calc_year(int year1);

int main(void)
{
    printf("\nIn what year were you born? \n\n");
    scanf("%d", &year1);

    printf("\nWhat is your target age?\n\n");
    scanf("%d", &target_age);

    year2 = calc_year(year1);

    printf("\nIf you were born in %d will be %d in %d.\n\n", year1, target_age, year2);

    return 0;
}

int calc_year(year1)
{
    return(year1 + target_age);
}
