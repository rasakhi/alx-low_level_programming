#include "main.h"

/**
 * _atoi - converts a string to an integer
 * @s: string to be converted to integer
 * Return: integer if there are numbers in strings, 0 otherwise
 */
int _atoi(char *s)
{
	int a = 0;
	unsigned int i = 0;
	int b = 1;
	int c = 0;

	while (s[a])
	{
		if (s[a] == 45)
		{
			b *= -1;
		}
		while (s[a] >= 48 && s[a] <= 57)
		{
			c = 1;
			i = (i * 10) + (s[a] - '0');
			a++;
		}
		if (c == 1)
		{
			break;
		}
		a++;
	}
	i *= b;

	return (i);
}
