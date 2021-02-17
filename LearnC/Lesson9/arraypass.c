/*
    Passing an array to a function
*/

#include <stdio.h>
#define MAX 3

int array[MAX], count;
void pass_array();
int largest(int num_array[], int length);

int main(void)
{
  pass_array();

  return 0;
}

void pass_array()
{
  printf("\nEnter %d integer values: \n\n", MAX);

  for (count = 0; count < MAX; count++)
  {
    printf("%d.) ", (count + 1));
    scanf("%d", &array[count]);
  }

  printf("\nLargest value = %d\n\n", largest(array, MAX));
}

int largest(int num_array[], int length)
{
  int count, biggest;

  for (count = 0; count < length; count++)
  {
    if (count == 0)
        biggest = num_array[count];
    if (num_array[count] > biggest)
        biggest = num_array[count];
  }

  return biggest;
}
