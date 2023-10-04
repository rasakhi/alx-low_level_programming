#include "main.h"
#include <stdlib.h>

/**
 * _strdup - duplicates a given string
 * @str: string to be duplicated
 * Return: pointer to duplicates string or NULL
 */
char *_strdup(char *str)
{
	int i, j;
	char *s;

	i = 1;
	j = 0;
	if (str == NULL)
		return (NULL);
	while (str[i])
		i++;	/* computes length of string str */
	s = malloc((sizeof(char) * i) + 1);
	if (s == NULL)
		return (NULL);
	while (j <= i)
	{
		s[j] = str[j];
		j++;
	}		/* duplicates string */
	return (s);
}
