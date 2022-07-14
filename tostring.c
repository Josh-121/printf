#include "main.h"
int *myitoa(long int num)
{
        long int len = 0;
	long pNum = num < 0 ? -num : num;
        char *str = NULL;

        while (pNum > 0)
        {
                pNum /= 10;
                len++;
        }

        str = malloc(sizeof(char) * (len + 2));
                if (str == NULL)
                {
                        exit(1);
                }

        if (num > 0)
        {
                long int i;

                str[len] = '\0';
                for (i = len ; i > 0 ; i--)
                {
                        str[i - 1] = (num % 10) + '0';
                        num /= 10;
                }
        }

        else if (num < 0)
        {
                long int k;

                str[0] = '-';
                pNum = num * -1;
                str[len + 1] = '\0';
                for (k = len ; k >= 1; k--)
                {
                        str[k] = (pNum % 10) + '0';
                        pNum /= 10;
                }
        }

        else{
                str[0] = '0';
	}
	_printf("%s",str);
	free(str);
	return 0;
        	
}
