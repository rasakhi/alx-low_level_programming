#include "main.h"

/**
 * _strpbrk - search a string for a set of bytes
 * @s: source string
 * @accept: accepted characters
 * Return: pointer to byte in sthat matches with accept or NULL
 */
char *_strpbrk(char *s, char *accept)
{
	int i = 0, j;

	while (s[i])
	{
		j = 0;

		while (accept[j])
		{
			if (s[i] == accept[j])
			{
				s += i;
				return (s);
			}
			j++;
		}
		i++;
	}
	return ('\0');
}
