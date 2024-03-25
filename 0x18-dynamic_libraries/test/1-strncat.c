#include "main.h"

/**
 * _strncat - Concatenates two strings using an inputed
 * number of bytes from the source
 * @dest: The destination string
 * @src: The source string
 * @n: the number of bytes from src to be added
 * Return: A pointer to the appended string destination
 */

char *_strncat(char *dest, char *src, int n)
{
	int i, length;

	i = 0;
	length = 0;

	while (dest[i])
	length++;
	for (i = 0; src[i] && i < n; i++)
	dest[length++] = src[i];
	return (dest);
}
