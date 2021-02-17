/*
  Demonstrates if else statements and some of C's other operators
*/

#include <stdio.h>

#define CURRENTYEAR 2021

int birth_year, age;

int main()
{
    printf("\nEnter the year you were born: \n\n");
    scanf("%d", &birth_year);

    age = CURRENTYEAR - birth_year;

    printf("\nSince you were born in %d", birth_year);

    if (birth_year % 4 == 0)
        printf(" you were born in a leap year.\n");

    else
        printf(" you were not born in a leap year.\n");

    printf("\nSince you are %d years old ", age);

    if (age < 16)
        printf("you are not able to drive, vote, serve your country, consume alcohol or run for president.\n\nYou are legally a minor.\n\n");

    if (age >= 16 && age < 18)
        printf("you are old enough to drive. You are not old enough to vote, serve your country, consume alcohol or run for president.\n\nYou are legally a minor.\n\n");

    if (age >= 18 && age < 21)
        printf("you are old enough to drive, vote and serve your country. You are not old enough to comsume alcohol or run for president.\n\nYou are legally an adult.\n\n");

    if (age >=21 && age < 30)
        printf("you are old enough to drive, vote, serve your country and consume alcohol. You are not old enough to run for president.\n\nYou are legally an adult.\n\n");

    if (age >= 30)
        printf("you are old enough to drive, vote, serve your country, consume alcohol and run for president.\n\nYou are legally an adult.\n\n");

    return 0;
}
