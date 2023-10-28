#include "main.h"

/**
 * set_bit - sets the value of a bit to 1 at a given index
 * @n: pointer to integer
 * @index: index of the bit
 * Return: 1 if successful and -1 otherwise
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int o;

	if (index > 63)
		return (-1);
	o = 1 << index;
	*n = (*n | o);
	return (1);
}
