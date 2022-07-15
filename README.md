_printf is a custom implementation of the C programming function printf.

Prototype: int _printf(const char *, ...);

printf.c

contains the fucntion _printf, which uses the prototype int _printf(const char *format, ...);. The format string is composed of zero or more directives. See man 3 printf for more detail. _printf will return the number of characters printed (excluding the null byte used to end output to strings) and will write output to stdout, the standard output stream.

Some Examples

Integer

Input: _printf("There are %i dozens in a gross\n", 12);
Output: There are 12 dozens in a gross

Character

Input: _printf("The first letter in the alphabet is %c\n", 'A');
Output: The first letter in the alphabet is A

String

Input: _printf("%s\n", 'This is a string.');
Output: This is a string.

Decimal:

Input: _printf("%d\n", 1000);
Output: 1000

Rot13

Input: _printf("Unknown:[%R]\n", "HELLO WORLD");
Output: URYYB JBEYQ

FLAGS

Input: printf("Flag: [%+ d]", 1230);
Output: Flag: [+1230] => 13

OCTAL

Input: printf("Unsigned octal:[%o]", 6);
Output: Unsigned octal:[6] => 18

Project Requirements



WRITTEN BY: Olatubosun Ibitoye and Favour Wright
