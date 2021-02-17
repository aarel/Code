/*
    Demonstrates if statements and some of C's relational operators
*/

#include <stdio.h>

#define CURRENTYEAR 2021

int birth_year, age;

int main()
{
    printf("\nEnter the year you were born: \n\n");
    scanf("%d", &birth_year);

    if (birth_year % 4 == 0)
        printf("\nYou were born in a leap year.\n");

    if (birth_year % 4 != 0)
        printf("\nYou were not born in a leap year.\n");

    age = CURRENTYEAR - birth_year;

    printf("\nSince you are %d years old ", age);

    if (age < 16)
        printf("you are not old enough to drive, vote, serve your country, consume alcohol, or run for president. You are legally a minor.\n\n");

    if (age >= 16 && age < 18)
        printf("you are old enough to drive but not old enough to vote, serve your country, consume alcohol, or run for president. You are legally a minor.\n\n");

    if (age >= 18 && age < 21)
        printf("you are old enough to drive, vote and serve your country. You are not old enough to consume alcohol or run for president. You are legally an adult.\n\n");

    if (age >= 21 && age < 30)
        printf("you are old enough to drive, vote, serve your country and consume alcohol. You are not old enough to run for president. You are legally an adult.\n\n");

    if (age >= 30)
        printf("you are old enough to drive, vote, serve your country, consume alcohol and run for president. You are legally an adult.\n\n");

    return 0;
}
