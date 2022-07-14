
#include "main.h"
void _tohex(long number)
{
    long quotient=number;
    long remainder;
    int i, j = 0;
    char hexadecimalnum[100];

    
    while (quotient != 0)
    {
        remainder = quotient % 16;
        if (remainder < 10)
            hexadecimalnum[j++] = 48 + remainder;
        else
            hexadecimalnum[j++] = 55 + remainder;
        quotient = quotient / 16;
    }

    for (i = j; i >= 0; i--)
            _printf("%c",hexadecimalnum[i]);
  
}
