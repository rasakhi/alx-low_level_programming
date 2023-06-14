#include "main.h"
#include <stdlib.h>

/**
 * _strdup - duplicates a string
 * @str: string to be duplicated
 * Return: duplicated string
 */
char *_strdup(char *str)
{
	int i, j;
	char *s;

	i = 1;
	j = 0;
	if (str == NULL)
	{
		return (NULL);
	}
	while (str[i])
	{
		i++;
	}
	s = malloc((sizeof(char) * i) + 1);
	if (s == NULL)
	{
		return (NULL);
	}
	while (j < i)
	{
		s[j] = str[i];
		j++;
	}
	s[j] = '\0';
	return (s);
}
