/*
    What is the value of x when the following statement is complete
*/

#include <stdio.h>

int x;
int count_x(int x);

int main(void)
{
    count_x(x);

    return 0;
}

int count_x(int x)
{
    for (x = 0; x < 100; x++)
    {
        if (x == 99)
        {
            printf("%d\n\n", x);
        }
        else
        {
            printf("%d, ", x);
        }
    }

    return 0;
}
