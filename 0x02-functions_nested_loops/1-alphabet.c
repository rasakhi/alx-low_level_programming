#include "main.h"

/**
 * print_alphabet -  c function that prints the alphabet, in lowercase
 *
 */
void print_alphabet(void)
{
	char c = 'a';

	while (c <= 'z')
	{
		_putchar(c);
		c++;
	}

	_putchar('\n');
}
