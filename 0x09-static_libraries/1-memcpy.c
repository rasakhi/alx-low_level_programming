#include "main.h"

/**
 * _memcpy - Copies memory area
 * @dest: destination memory area
 * @src: source memory area
 * @n: bytes from memory area to copy
 * Return: memory area that has been copied
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int a = 0;

	while (a < n)
	{
		dest[a] = src[a];
		a++;
	}
	return (dest);
}
