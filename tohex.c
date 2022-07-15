
#include "main.h"
int _tohex(int number)
{
    int quotient=number;
    int remainder;
    int i, j;
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
    
            _putchar(hexadecimalnum[i]);
    
    return j;
}
