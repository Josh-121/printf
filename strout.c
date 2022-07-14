
#include "main.h"

void _sprintf(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		_printf("%c",str[i]);
	}
}
