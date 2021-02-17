/*
   Write a function that takes two numbers as arguments
   and returns the value of their product.
*/

#include <stdio.h>

int x, y, product;

int input_x();
int input_y();
int multiply(int x, int y);

int main()
{
    input_x();
    input_y();
    multiply(x, y);
    printf("\n%d x %d = %d\n\n", x, y, product);
    return 0;
}

int input_x()
{
    puts("\nEnter a multiple: \n");
    scanf("%d", &x);

    return x;
}

int input_y()
{
    puts("\nEnter a multiple: \n");
    scanf("%d", &y);

    return y;
}

int multiply(int x, int y)
{
    product = x * y;

    return product;
}
