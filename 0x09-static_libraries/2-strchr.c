#include "main.h"

/**
 * _strchr - locate character in string
 * @s: source string
 * @c: charcter to be found
 * Return: A pointer to the first occurence of c in s or NULL
 */
char *_strchr(char *s, char c)
{
	int i = 0, j;

	while (s[i])
		i++;
	for (j = 0; j <= i; j++)
	{
		if (c == s[j])
		{
			s += j;
			return (s);
		}
	}
	return ('\0');
}
