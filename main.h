#ifndef PRINTF_H
#define PRINTF_H
#include <stdlib.h>
void _sprintf(char *str);
int _printf(const char *format, ...);
void _count(int *ptr, char *str);
int * myitoa(long int num);
void _tobinary(int n);
char *rev_string(char *s);
char _putchar(char c);
void _tohex(long number);
#endif
