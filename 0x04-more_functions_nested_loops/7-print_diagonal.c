#include "main.h"

/**
 * print_diagonal - prints a diagonal line on the terminal
 * @n: number of \ characters to be printed
 */
void print_diagonal(int n)
{
	if (n > 0)
	{
		int i, j;

		for (i = 0; i < n ; i++)
		{
		for (j = 0; j < i ; j++)
		{
			_putchar(' ');
		}
		_putchar('\\');
		_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
