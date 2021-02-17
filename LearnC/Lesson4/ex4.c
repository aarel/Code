/*
||
|| This is an example of an if statement.
||
*/

#include <stdio.h>

int x; 

int y = 10;

int main()
{
    printf("\nEnter x to be evaluated: \n\n");
    scanf("%d", &x);

    printf("Checking y criteria...\n\n");

    if ((x > 1) && (x < 20))
      printf("Success, x meets y criteria.\n\n");
    
    else
      printf("Failure, x does not meet y criteria.\n\n");

    return 0;

}
