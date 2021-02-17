/*
    Write a function that calls functions ex7.c:multiply() and ex8.c:divide() .
*/

#include <stdio.h>


int x, y, choice, product, quotient;

int operation_choice();
int multiple_x();
int multiple_y();
int multiply(int x, int y);
int dividend();
int divisor();
int validate(int y);
int divide(int x, int y);

int main()
{
    operation_choice();

    return 0;
}

int operation_choice()
{    
    puts("\nChoose an operation: 1. Multiply 2. Divide : \n");
    scanf("%d", &choice);
    if(choice == 1)
    {
        multiple_x();
        multiple_y();   
        multiply(x, y);
        printf("\n%d x %d = %d\n\n", x, y, product);
    }
    else if(choice == 2)
    {
        dividend();
        divisor();
        validate(y);
        divide(x, y);
        printf("\n%d / %d = %d\n\n", x, y, quotient);
    }
    else
    {
        puts("\nError: Not a valid choice. Please try again later.\n");
    }

    return 0;
}

int multiple_x()
{
    puts("\nEnter a multiple: \n");
    scanf("%d", &x);

    return x;
}

int multiple_y()
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

int dividend()
{
    puts("\nEnter a dividend: \n");
    scanf("%d", &x);

    return x;
}

int divisor()
{
    puts("\nEnter a divisor: \n");
    scanf("%d", &y);

    return y;
}

int validate(int divisor)
{
    if (y == 0)
    {
        puts("\nError: Cannot divide by zero!");
        puts("\nEnter a divisor: ");
        scanf("%d", &y);
        validate(y);
    }
    else
    {
        return y;
    }

    return 0;
}

int divide(int a, int b)
{
   quotient = x / y;

    return quotient;
}
