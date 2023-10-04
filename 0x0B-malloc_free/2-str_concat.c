#include "main.h"
#include <stdlib.h>

/**
 * str_concat - Concatenates two strings
 * @s1: first string
 * @s2: second string
 *
 * Return: Concatenated string
 */
char *str_concat(char *s1, char *s2)
{
	int i, j, k, length;
	char *s;

	i = j = k = 0;
	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (s1[i])
		i++;	/* computes length of s1 */
	while (s2[j])
		j++;	/* computes length of s2 */
	length = i + j;	/* length of two strings */
	s = malloc((sizeof(char) * length) + 1);
	if (s == NULL)
		return (NULL);
	j = 0;
	while (k <= length)
	{
		if (k <= i)
			s[k] = s1[k];
		if (k >= i)
		{
			s[k] = s2[j];
			j++;
		}
		k++;
	}
	return (s);
}
