
#include "main.h"

int _sprintf(char *str)
{
	int i;
        if(str == NULL)
                return NULL;
    
	for (i = 0; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
	}
	return i ;
}
