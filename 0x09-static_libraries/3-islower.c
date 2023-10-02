#include "main.h"

/**
 * _islower - c function that checks for lowercase character
 *
 * @c: character to be checked
 *
 * Return: 1 if c is lowercase and 0 otherwise
 *
 */
int _islower(int c)
{
	if (c > 96 && c < 123)
	{
		return (1);
	}

	return (0);
}
