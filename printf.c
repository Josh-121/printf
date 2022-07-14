#include "main.h"
#include <stdarg.h>
#include <stdlib.h>

int _printf(const char *format, ...)
{
	va_list ap;
	int i = 0, len = 0, k, j, counter = 0;
	char *dest = NULL;
	char *argStr;

	while (format[len] != '\0')
		len++;


	dest = malloc(sizeof(char) * len);
	if (dest == NULL)
		exit(1);


	va_start(ap, format);
	while (format[i] != '\0')
	{
		if (format[i] == '%' && format[i + 1] == 'c')
		{
			argStr = malloc(sizeof(char) * 2);
			argStr[0] = (char)va_arg(ap, int);
			argStr[1] = '\0';
			_count(&counter, argStr);
			_putchar(argStr[0]);
			free(argStr);
			i += 2;
		}
		else if (format[i] == '%' && format[i + 1] == '%')
		{
			argStr = malloc(sizeof(char) * 2);
			argStr[0] = '%';
			argStr[1] = '\0';
			_count(&counter, argStr);
			_putchar('%');
			free(argStr);
			i += 2;
		}
		else if (format[i] == '%' && format[i + 1] == 's')
		{
			_sprintf(va_arg(ap, char *));
			i += 2;
		}
		else if (format[i] == '%' && format[i + 1] == 'i')
		{
			myitoa(va_arg(ap, int));
			i += 2;
		}
		else if (format[i] == '%' && format[i + 1] == 'd')
		{
			myitoa(va_arg(ap, int));
			i += 2;
		}
		else if (format[i] == '%' && format[i + 1] == 'b')
                {
                        _tobinary(va_arg(ap, int));
                        i += 2;
                }
		 else if (format[i] == '%' && format[i + 1] == 'r')
                {
                        argStr = rev_string(va_arg(ap, char *));
                        _count(&counter, argStr);
                        _sprintf(argStr);
                        free(argStr);
                        i += 2;
                }
		 else if (format[i] == '%' && format[i + 1] == 'x')
                {
                        _tohex(va_arg(ap, long));
                    
                        i += 2;
                }



		else
		{
			for (j = i, k = 0; format[j] != '\0' ; k++, j++, i++)
			{
				if (format[j] == '%')
				{
					i = j;
					break;
				}
				else
				{
					dest[k] = format[j];
				}
			}
			dest[k] = '\0';
			_count(&counter, dest);
			_sprintf(dest);
		}
	}
	va_end(ap);
	return (counter);
}
