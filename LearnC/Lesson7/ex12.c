/*
    Write a program that inputs integers from the keyboard, storing them in an array.
    Input should stop when a zero is entered or when the end of the array is reached.
    Then, find and display the array's largest and smallest values.
*/

#include <stdio.h>

int arr[3];
int n, lg, sm;

void lg_sm_arr();

int main()
{
    puts("\nEnter non-zero whole numbers to compare largest and smallest. Press Enter after each number.\n");
    for(x = 0; x < 3; x++)
    {
        puts("\nValue %d. \n", x + 1);
        if (n != 0)
        {
            scanf("%d", &arr[x]);
        }
        else
        {
            puts("\nPlease enter a non-zero whole number\n");
            lg_sm_arr();
        }
    }

    
}
