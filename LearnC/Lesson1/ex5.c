/*
    Linker error:

    ex5.c:10:5: warning: implicit declaration of function 'do_it' is invalid in C99
          [-Wimplicit-function-declaration]
        do_it( "problem!" );
        ^
    1 warning generated.
    Undefined symbols for architecture x86_64:
      "_do_it", referenced from:
          _main in ex5-3f63ce.o
    ld: symbol(s) not found for architecture x86_64
    clang: error: linker command failed with exit code 1 (use -v to see invocation)
*/

#include <stdio.h>

int main(void)
{
    printf( "This is a program with a " );
    do_it( "problem!" );
    return 0;
}
