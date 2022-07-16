#include "main.h"
#include <stdarg.h>
#include <stdlib.h>

int _printf(const char *format, ...)
{
	va_list ap;
	int i = 0, counter = 0;
	
	
	va_start(ap, format);
	
	while (format[i] != '\0')
	{       
     
		if (format[i] == '%' && format[i + 1] == 'c')
		{
			_putchar((char)va_arg(ap, int));
			counter++ ;
			i+=2;
		}
		else if (format[i] == '%' && format[i + 1] == '%')
		{
			_putchar('%');
			counter++ ;
			i += 2;
		}
		else if (format[i] == '%' && (format[i + 1] == 's'||format[i + 1] == 'S'))
		{
			counter += _sprintf(va_arg(ap, char *));
			i += 2;
		}
		else if (format[i] == '%' && (format[i + 1] == 'i'||format[i + 1] == 'd'||format[i + 1] == 'u'))
		{
			counter += _sprintf(myitoa(va_arg(ap, int)));
			i += 2;
		}
	
		else if (format[i] == '%' && format[i + 1] == 'b')
                {
                        counter+=_sprintf(myitoa(_tobinary(va_arg(ap, int))));
                        i += 2;
                }
	        else if (format[i] == '%' && (format[i + 1] == 'x'||format[i + 1] == 'X'))
                {
                        counter += _tohex(va_arg(ap, int));
                        i += 2;
                }
		else if (format[i] == '%' && format[i + 1] == 'o')
                {
                        counter+=_sprintf(myitoa(_octal(va_arg(ap, int))));
                        i += 2;

                }

		 else if (format[i] == '%' && format[i + 1] == 'r')
                {
                        counter += _sprintf(rev_string(va_arg(ap, char *)));                        
                        i += 2;
                }

                else if (format[i] == '%' && format[i + 1] == 'R')
                {
                        counter += _sprintf(rot13(va_arg(ap, char *)));
                        i += 2;
                }

		else
		{
			_putchar(format[i]);
			counter++;
			i++;
		}
	}
	va_end(ap);
	return (counter);
}
