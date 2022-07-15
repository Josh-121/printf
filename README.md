_printf is a custom implementation of the C programming function printf.

Prototype: int _printf(const char *, ...);

printf.c

contains the fucntion _printf, which uses the prototype int _printf(const char *format, ...);. The format string is composed of zero or more directives. See man 3 printf for more detail. _printf will return the number of characters printed (excluding the null byte used to end output to strings) and will write output to stdout, the standard output stream.


WRITTEN BY: Olatubosun Ibitoye and Favour Wright
