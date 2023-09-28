#include "main.h"

/**
 * _strlen_recursion - returns the length of a string
 * @s: string whose length is to be determined
 * Return: length of the string
 */
int _strlen_recursion(char *s)
{
	int i = 1;

	if (*s != '\0')
		return (_strlen_recursion(s + 1) + i);
	else
		return (0);
}
