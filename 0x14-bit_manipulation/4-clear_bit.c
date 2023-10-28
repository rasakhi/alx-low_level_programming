#include "main.h"

/**
 * clear_bit - sets the value of a bit to 0 at a given index
 * @n: pointer to the integer
 * @index: index of the bit
 * Return: 1 if successful and -1 otherwise
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned int o;

	if (index > 63)
		return (-1);
	o = 1 << index;
	if (*n & o)
		*n ^= o;
	return (1);
}
