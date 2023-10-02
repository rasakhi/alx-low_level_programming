#include "main.h"

/**
 * _strlen - returns the length of a string
 * @s: pointer s
 * Return: length of string
 */
int _strlen(char *s)
{
	int length = 0;

	while (*s++)
	{
		length++;
	}

	return (length);
}
