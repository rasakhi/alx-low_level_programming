#include "main.h"

/**
 * _isalpha - function to check for alphabetic character
 *
 * @c: character to be checked
 *
 * Return: 1 if c is a letter and 0 otherwise
 */
int _isalpha(int c)
{
	if ((c > 64 && c < 91) || (c > 96 && c < 123))
	{
		return (1);
	}

	return (0);
}
