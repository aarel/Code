/*
    Displaying addresses of successive array elements
*/

#include <stdio.h>

int ctr;
short array_s[10];
float array_f[10];
double array_d[10];

void arr_addr_datatype();

int main(void)
{
  arr_addr_datatype();

  return 0;
}

void arr_addr_datatype()
{
  printf("\t\t  Short\t\t\t  Float\t\t\t  Double");

  printf("\n======================================");
  printf("========================================");

  /* Print the address of each array element. */

  for (ctr = 0; ctr < 10; ctr++)
  {
    printf("\nElement %d:\t%p\t\t%p\t\t%p", ctr,
         &array_s[ctr], &array_f[ctr], &array_d[ctr]);
  }

  printf("\n======================================");
  printf("========================================\n\n");
}
