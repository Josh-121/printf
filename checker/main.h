#ifndef PRINTF_H
#define PRINTF_H

#include <stdlib.h>
#include <unistd.h>
#include <stdarg.h>
#include <limits.h>

void _sprintf(const char *str);
int _printf(const char *format, ...);
void _count(int *ptr, char *str);
char * myitoa(int num);

#endif
