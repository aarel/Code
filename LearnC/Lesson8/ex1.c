/*
    Write a program line that would declare three one-dimensional
    integer arrays named one, two and three, with 1000 elements each
*/

#include <stdio.h>

int one[1000]; 
int two[1000];
int three[1000];
void set_arr(int one[1000], int two[1000], int three[1000]);

int main(void)
{
  set_arr(one, two, three);

  return 0;
}

void set_arr(int one[1000], int two[1000], int three[1000])
{
    if (one[1000] != NULL){
      printf("t");
    } 
}
