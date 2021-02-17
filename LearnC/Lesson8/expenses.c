/*
    Demonstrates use of an array
*/

#include <stdio.h>

float expenses[13];
int count;
float year_expenses = 0;
float year_avg_expenses = 0;
void calc_expenses();

int main(void)
{
    calc_expenses();

    return 0;
}
void calc_expenses()
{
    for (count = 1; count < 13; count++)
    {
        printf("\nEnter expenses for month %d: \n", count);
        scanf("%f", &expenses[count]);
    }

    for (count = 1; count < 13; count++)
    {
        printf("\nMonth %d = $%.2f\n", count, expenses[count]);
        year_expenses += expenses[count];
        year_avg_expenses = year_expenses / count;
    }

    printf("\nYearly expenses are $%.2f\n", year_expenses); 
    printf("\nAverage yearly expenses are $%.2f\n\n", year_avg_expenses); 
}
