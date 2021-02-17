/*
    Write a function that calculates the average of five float values.
*/

#include <stdio.h>

float a, b, c, d, e, avg;
float values();
float calc_avg();

int main()
{
    calc_avg();

    return 0;
}

float calc_avg()
{
    puts("\nEnter five values to calculate the average of those values.");
    puts("\nValue 1 ");
    scanf("%f", &a);
    puts("\nValue 2 ");
    scanf("%f", &b);
    puts("\nValue 3 ");
    scanf("%f", &c);
    puts("\nValue 4 ");
    scanf("%f", &d);
    puts("\nValue 5 ");
    scanf("%f", &e);

    avg = (a + b + c + d + e) / 5;

    printf("\nThe average of the values entered is %f\n\n", avg);

    return 0;
}
