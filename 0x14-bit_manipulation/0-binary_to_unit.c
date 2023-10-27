#include "main.h"

/**
 * binary_to_uint - converts a binary number to
 * an unsigned int.
 * @b: binary
 * Return: unsigned int
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int integer;
	int length, binary;
	
	if (!b)
		return (0);
	integer = 0;
	for (length = 0; b[length] != '\0'; length++);
	for (length--, binary = 1; length >= 0; length--, binary *= 2)
	{
		if (b[length] != '0' && b[length] != '1')
			return (0);
		if (b[length] & 1)
		{
			integer += binary;
		}
	}
	return (integer);
}
