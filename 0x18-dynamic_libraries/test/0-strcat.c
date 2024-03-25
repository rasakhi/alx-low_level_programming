#include "main.h"

/**
 * _strcat - concatenates two strings
 * @dest: The destination string
 * @src: The source string
 * Return: A pointer to the concatenated string dest
 */

char *_strcat(char *dest, char *src)
{
	int length, i;

	length = 0;
	while (dest[length])
	{
		length++;
	}

	for (i = 0; src[i] != 0; i++)
	{
		dest[length] = src[i];
		length++;
	}
	dest[length] = '\0';
	return (dest);
}
