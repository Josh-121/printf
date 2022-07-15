#ifndef PRINTF_H
#define PRINTF_H
#include <stdlib.h>
int _sprintf(char *str);
int _printf(const char *format, ...);
char * myitoa(long int num);
long _tobinary(unsigned int n);
char *rev_string(char *s);
char _putchar(char c);
int _tohex(int number);
int _octal(int decimalNumber);
#endif
