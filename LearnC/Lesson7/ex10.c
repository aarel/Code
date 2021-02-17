/*
    Write a program that accepts two floating point values from the keyboard and returns their product
*/

#include <stdio.h>

float x, y;
void float_product();

int main(void)
{
    float_product();

    return 0;
}

void float_product()
{
    puts("\n\nEnter a decimal value: \n");
    scanf("%f", &x);
    puts("\nEnter a second decimal value: \n");
    scanf("%f", &y);

    printf("\n%f x %f = %f\n\n", x, y, x * y);


}
