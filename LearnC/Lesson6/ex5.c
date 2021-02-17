/*
    Write a for statement that counts from 1 to 100 by 3s.
*/

#include <stdio.h>

int x;
int count(int x);

int main(void)
{
    count(x);

    return 0;
}

int count(int x)
{
    for (x = 0; x <= 100; x +=3)
    {
        if (x == 99)
        {
            printf("%d\n\n", x);
        }
        else if (x != 0 && x %3 == 0)
        {
            printf("%d, ", x);
        }
        else
        {
            printf("\n%d ", x);
        }
    }

    return 0;
}
