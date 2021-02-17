/*
    Given the following array, write code to initialize all elements to 11: 

    int elevin[11]
*/

/*
    int eleven[11];

    Method 1:
    ---------

    int elevin[11] = { 11, 11, 11, ..., 11 };

    Method 2:
    ---------

    int elevin[11];
    int x;

    for (x = 0; x < 11; x++)
    {
      eightyeight[x] = 11;
    }
*/

#include <stdio.h>

int elevin[11];
int x;

void init_arr(int elevin[11]);

int main(void)
{
  init_arr(elevin);

  return 0;
}

void init_arr(int a[])
{
  printf("\n");

  for (x = 0; x < 11; x++)
  {
    elevin[x] = 11;

    printf("%d ", elevin[x]);
  }

  printf("\n\n");
}
