/*
    Write a program that initializes an array of 10 elements.
    Each element should be equal to its subscript. The program
    should then print each of the 10 elements.
*/

#include <stdio.h>

int arr[10];
int x;
int counter;
void init_arr(int arr[10]);

int main(void)
{
  init_arr(arr);

  return 0;
}

void init_arr(int arr[10])
{
  printf("\n");

  for (counter = 0; counter < 10; counter++)
  { 
    for (x = 0; x < 10; x++)
    {
      arr[x] = counter;
      counter++;

      printf("%d ", arr[x]);
    }
  }

  printf("\n\n");
}
