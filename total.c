

/**
 * _count - counts the string
 * @ptr: counter
 * @str: string to count
 */
void _count(int *ptr, char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		*ptr += 1;
	}
}
