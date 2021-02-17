/*
    This is an example of the previous exercise if statement as a conditional statement using the ternary operator ':'.
*/

#include <stdio.h>

int x;

int y = 10;

int main()
{
    printf("\nEnter x to be evaluated: \n\n");
    scanf("%d", &x);

    printf("\nChecking y criteria...\n\n");
    ((x > 1) && (x < 20)) ?
      printf("Success, x meets y criteria.\n\n") : 
      printf("Failure, x does not meet y criteria.\n\n");

    return 0;

}
