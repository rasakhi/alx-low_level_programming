#include "main.h"

/**
 * print_numbers - prints the numbers 0 to 9
 */
void print_numbers(void)
{
	int c = 48;

	while (c < 58)
	{
		_putchar(c);
		c++;
	}

	_putchar('\n');
}
