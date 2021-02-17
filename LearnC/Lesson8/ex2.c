/*
    Write a statement that would declare an 8-element integer array
    and initialize all elements to 1
*/

#include <stdio.h>

int arr1[8] = { 1, 1, 1, 1, 1, 1, 1, 1 };
int arr2[8];
int x;

void print_arr(int arr1[8], int arr2[8]);

int main(void)
{
  print_arr(arr1, arr2);

  return 0;
}

void print_arr(int arr1[8], int arr2[8])
{
  printf("\n");

  for (x = 0; x < 8; x++)
  {
    arr2[x] = 1;

    printf("%d ", arr2[x]);
  }

  printf("\n\n");

  printf("%d %d %d %d %d %d %d %d", arr1[0], arr1[1], arr1[2], arr1[3], arr1[4], arr1[5], arr1[6], arr1[7]);

  printf("\n\n");
}
