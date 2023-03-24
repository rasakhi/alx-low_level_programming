#include "main.h"

/**
 * print_line - prints straight line of stipulated length
 * @n: number of times _ will be printed to draw line
 */
void print_line(int n)
{
	if (n > 0)
	{
		while (n > 0)
		{
			_putchar('_');
			n--;
		}

		_putchar('\n');
	}
	else
	{
		_putchar('\n');
	}
}
