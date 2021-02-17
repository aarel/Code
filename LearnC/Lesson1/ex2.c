/*
    This program calculates area of a circle given a radius.
    The datatype of area is integer. pi is a floating point decimal.
    When multiplying a float with an integer the result is an integer.
*/

#include <stdio.h>

int radius, area;

int main (void)
{
    printf( "Enter radius (i.e. 10): " );
    scanf( "%d", &radius );

    area = (int) (3.14159 * radius * radius);

    printf( "\nArea = %d\n\n", area );

    return 0;
}
