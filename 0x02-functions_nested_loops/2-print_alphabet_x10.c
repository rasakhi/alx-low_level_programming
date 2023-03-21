#include "main.h"

/**
 * print_alphabet_x10 - c function to print lowercase alphabet 10 times
 *
 */
void print_alphabet_x10(void)
{
	int i = 0;

	while (i < 10)
	{
		char alpha = 'a';

		while (alpha <= 'z')
		{
			_putchar(alpha);
			alpha++;
		}

		_putchar('\n');
		i++;
	}
}
