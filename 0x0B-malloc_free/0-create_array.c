#include "main.h"
#include <stdlib.h>

/**
 * create_array - creates array of char initialized with specific char
 * @size: size of array
 * @c: char array is to be initialized with
 * Return: pointer to array or NULL
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i; /* index of array */
	char *s; /* for array(string) */

	if (size == 0)
		return (NULL);
	s = malloc(size * sizeof(char));
	if (s == NULL)
		return (NULL);
	i = 0;
	while (i < size)
	{
		s[i] = c;
		i++;
	}
	return (s);
}
