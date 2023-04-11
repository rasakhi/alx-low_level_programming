#include "main.h"

/**
 * print_times_table - prints the n times table
 * starting from 0.
 * @n: The times table to be printed
 */

void print_times_table(int n)
{
	int i, j, k;

	if (n >= 0 && n < 16)
	{
		for (i = 0 ; i <= n; i++)
		{
			_putchar('0');
		for (j = 1 ; j <= n; j++)
		{
			_putchar(',');
			_putchar(' ');
			k = i * j;
			if (k < 100)
			{
				_putchar(' ');
			}
			if (k < 10)
			{
				_putchar(' ');
			}
			if (k > 99)
			{
				_putchar((k / 100) + '0');
				_putchar(((k / 10) % 10) + '0');
			}
			else if (k > 9 && k < 100)
			{
				_putchar((k / 10) + '0');
			}
			_putchar((k % 10) + '0');
		}
		_putchar('\n');
		}
	}
}
