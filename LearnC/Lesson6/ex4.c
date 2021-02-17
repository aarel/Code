/*
    What is the value of ctr after the following statement is complete
*/

#include <stdio.h>

int ctr;
int count(int ctr);

int main(void)
{
    count(ctr);
    return 0;
}

int count(int ctr)
{
    for (ctr = 2; ctr < 10; ctr += 3) ;

    return 0;
}
