#include "main.h"

/**
 * _memset - Fills memory with a constant byte
 * @s: memory area to fill
 * @b: constant byte
 * @n: number of bytes to fill
 * Return: The memory area that has been filled
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int a = 0;

	while (a < n)
	{
		s[a] = b;
		a++;
	}
	return (s);
}
