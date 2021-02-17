/*
    Write a program that takes 10 integer values and outputs the sum to the screen
*/

#include <stdio.h>

int arr[10];
void add();

int main(void)
{
    add();

    return 0;
}

void add()
{
    int x, sum;

    puts("\nEnter 10 whole numbers. Press Enter after each number.\n");

    for (x = 0; x < 10; x++)
    {
        printf("\nValue %d: \n", x + 1);
        scanf("%d", &arr[x]);
        sum += arr[x];
    }

    printf("\nSum of values: %d\n\n", sum);
}
