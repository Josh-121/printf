
#include <stdlib.h>
char *rev_string(char *s)
{
	int i, j, k,len;
	char c;
	char *newstr;

	i = 0;
	k = 0;
	len = 0;
	newstr = NULL;

	while (s[len] != '\0')
	{
		len++;
	}

	newstr = malloc(sizeof(char) * (len + 1));

	if (newstr == NULL)
		exit (1);

	while (newstr[i] != '\0')
	{
		i++;
	}

	j = i - 1;
	while (k < j)
	{
		c = newstr[j];
		newstr[j] = newstr[k];
		newstr[k] = c;

		k++;
		j--;
	}
	return(newstr);
}
