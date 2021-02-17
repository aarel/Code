/*
    This is a program that displays the size of variable types.
*/

#include <stdio.h>

int main(void)
{
    printf( "\nA   char                 is %lu bytes", sizeof( char ));
    printf( "\nAn  int                  is %lu bytes", sizeof( int )); 
    printf( "\nA   short                is %lu bytes", sizeof( short ));
    printf( "\nA   long                 is %lu bytes", sizeof( long ));
    printf( "\nA   long long            is %lu bytes", sizeof( long long ));
    printf( "\nAn  unsigned char        is %lu bytes", sizeof( unsigned char )); 
    printf( "\nAn  unsigned int         is %lu bytes", sizeof( unsigned int ));
    printf( "\nAn  unsigned short       is %lu bytes", sizeof( unsigned short ));
    printf( "\nAn  unsigned long        is %lu bytes", sizeof( unsigned long ));
    printf( "\nAn  unsigned long long   is %lu bytes", sizeof( unsigned long long ));
    printf( "\nA   float                is %lu bytes", sizeof( float ));
    printf( "\nA   double               is %lu bytes", sizeof( double ));
    printf( "\nA   long double          is %lu bytes", sizeof( long double ));
    printf( "\n\n");

    return 0;
}
