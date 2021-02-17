/*
    This program receives a string for name and counts the letters in the name including spaces.
*/

#include <stdio.h>
#include <string.h>

int main(void)
{
    char buffer[256];

    printf( "Enter your name and press <Enter>:\n");
    fgets( buffer );

    printf( "\nYour name has %d characters and spaces!",
                     strlen( buffer ));

    return 0;
}

/*
    Output on compile attempt:

        ex5.c:10:19: error: too few arguments to function call, expected 3, have 1
            fgets( buffer );
                        ^
        /usr/include/stdio.h:149:1: note: 'fgets' declared here
        char    *fgets(char * __restrict, int, FILE *);
        ^
        ex5.c:13:22: warning: format specifies type 'int' but the argument has type
              'unsigned long' [-Wformat]
                             strlen( buffer ));
      
    In earlier editions this program likely used gets()
    which takes 1 argument however, gets() is deprecated, replaced by fgets()
    which takes 3 arguments. The program fails to compile.
*/
