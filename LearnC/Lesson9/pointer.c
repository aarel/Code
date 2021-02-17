/*
    Basic pointer use.
*/

#include <stdio.h>

/* Declare and initialize an int variable */

int var = 1;
void var_w_ptr();

/*  Declare pointer to int */

int *ptr;

int main(void)
{
  var_w_ptr();

  return 0;
}

void var_w_ptr()
{
  /* Initialize ptr to point to var */

  ptr = &var;

  /* Access var directly and indirectly */

  printf("\n  Direct access, var = %d                 <--  using var", var);
  printf("\n  Indirect access, var = %d               <--  using *ptr", *ptr);

  printf("\n\n  The address of var = %p       <--  using &var", &var);
  printf("\n  The address of var = %p       <--  using ptr\n\n", ptr);
}
