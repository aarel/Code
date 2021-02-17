/*
    Given the following array initialize all array elements to 0:

    int stuff[12][10]
*/

#include <stdio.h>

int stuff[12][10];
int x, y;

void two_d_arr(int stuff[12][10]);

int main(void)
{
  two_d_arr(stuff);

  return 0;
}

void two_d_arr(int stuff[12][10])
{
  printf("\n");  

  for (x = 0; x < 12; x++)
  {
      for (y = 0; y < 10; y++)
      {
          stuff[x][y] = 0;
          printf("value at element [%d][%d] = ", x, y);
          printf("%d\n", stuff[x][y]);
      }

      printf("\nPress Enter to continue or Ctrl-C to quit.\n\n");
  }
}
