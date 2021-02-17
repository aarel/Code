/*
    This program illustrates the modulus operator.
    Given a number of seconds the program converts to hours, minutes, seconds
*/

#include <stdio.h>

//  Define constants

#define SECS_PER_MIN 60
#define SECS_PER_HOUR 3600

unsigned seconds, minutes, hours, secs_left, mins_left;

int main()
{
    printf("\n\nEnter the number of seconds ( < 65000 ): \n\n");
    scanf("%d", &seconds);

    hours = seconds / SECS_PER_HOUR;
    minutes = seconds / SECS_PER_MIN;
    mins_left = minutes % SECS_PER_MIN;
    secs_left = seconds % SECS_PER_MIN;

    printf("\n\n%u seconds is equal to ", seconds);
    printf("\n\n%u h, %u m, and %u s\n\n", hours, mins_left, secs_left);

    return 0;
}
