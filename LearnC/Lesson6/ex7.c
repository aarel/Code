/*
    Write a do...while statement that counts from 1 to 100 by 3s
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
    printf("\n%d, ", x);
    do
    {
        x +=3;
        if (x == 99)
        {
            printf("%d\n\n", x);
        }
        else
        {
            printf("%d, ", x);
        }
    }
    while(x <= 100);

    return 0;
}
