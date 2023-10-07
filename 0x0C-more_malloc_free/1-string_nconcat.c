#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - concatenates two strings
 * @s1: string 1
 * @s2: string 2
 * @n: number of bytes of second string to concatenate
 *
 * Return: Concatenated string or NULL
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int a, b, i, j;
	char *string;

	a = b = i = j = 0;
	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (s1[a])
		a++;
	while (s2[b])
		b++;
	if (n >= b)
		i = a + b;
	else
		i = a + n;
	string = malloc(sizeof(char) * (i + 1));
	if (string == NULL)
		return (NULL);
	b = 0;
	while (j < i)
	{
		if (j <= a)
			string[j] = s1[j];
		if (j >= a)
		{
			string[j] = s2[b];
			b++;
		}
		j++;
	}
	string[j] = '\0';
	return (string);
}
