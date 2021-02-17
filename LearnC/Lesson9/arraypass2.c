/*
    Passing an array to a function.
*/

#include <stdio.h>
#define MAX 3

int array[MAX+1], count;

void pass_array();
int largest(int num_array[]);

int main(void)
{
  pass_array();

  return 0;
}

void pass_array()
{
  printf("\nEnter an integer value: \n\n");

  for (count = 0; count < MAX; count++)
  {
    printf("%d.) ", (count + 1));
    scanf("%d", &array[count]);

    if (array[count] == 0)		/* Exit for loop */
        count = MAX;
  }

  array[MAX] = 0;

  printf("\nLargest value = %d\n\n", largest(array));
}

int largest(int num_array[])
{
  int count, biggest;

  for (count = 0; num_array[count] != 0; count++)
  {
    if (count == 0)
        biggest = num_array[count];
    if (num_array[count] > biggest)
        biggest = num_array[count];
  }

  return biggest;
}
