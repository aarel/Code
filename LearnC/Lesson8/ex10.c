/*
    Modify the program from ex9.c. After printing
    the initialized values, the program should copy
    the values to a new array and add 10 to them.
    Print the new values.
*/

#include <stdio.h>

int arr1[10];
int arr2[10];
int x, y, counter1, counter2;

void init_arr(int arr1[10], int arr2[10]);

int main(void)
{
  init_arr(arr1, arr2);

  return 0;
}

void init_arr(int arr1[10], int arr2[10])
{
  printf("\n");

  for (x = 0; x < 10; x++)
  {
    arr1[x] = counter1;
    arr2[y] = arr1[x] + 10;
    counter1++;

    printf("%d + 10 = %d\n\n", arr1[x], arr2[y]);
  }
}
