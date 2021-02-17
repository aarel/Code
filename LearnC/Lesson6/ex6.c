/*
    Write a while statement to count from 1 to 100 by 3s
*/

#include <stdio.h>

int x = 0;
int count(int x);

int main(void)
{
    count(x);

    return 0;
}

int count(int x)
{
    while(x <= 100)
    {
        if (x == 0)
        {
            printf("\n%d, ", x);
        }
        else if (x == 99)
        {
            printf("%d\n\n", x);
        }
        else
        {
            printf("%d, ", x);
        }

        x+=3;
    }

    return 0;
}
