/*
   Write a function that receives two numbers as arguments.
   The function should divide the first argument by the second.
   Remember the divide by 0 error.
*/

#include <stdio.h>

int x, y, quotient;

int validate(int y);
int dividend();
int divisor();
int divide(int x, int y);

int main()
{
    dividend();
    divisor();
    validate(y);
    divide(x, y);
    printf("\n%d / %d = %d\n\n", x, y, quotient);
    
    return 0;
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
