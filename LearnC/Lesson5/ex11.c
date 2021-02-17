/*
    Write a recursive function to take the value of three to the power of another number.
*/

#include <stdio.h>

int exponent;
int value;

int user_input();
int calc_exponent(int exponent);
void result(int value);

int main()
{
    user_input();
    calc_exponent(exponent);
    result(value);
    
    return 0;
}

int user_input()
{   
    puts("\nEnter a value to raise 3 to the power of: \n");
    scanf("%d", &exponent);

    return exponent;
}

int calc_exponent(int exponent)
{
    if (exponent < 1)
    {
        return ( 1 );
    }
    else
    {
       value = ( 3 * calc_exponent( exponent - 1 ));
    }

    return value;
}

void result(value)
{
    printf("\n3 to the power of %d is %d\n\n", exponent, value);
}
