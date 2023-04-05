#include "main.h"

/**
 * times_table - prints the 9 times table
 *
 * Return: Nothing
 */
void times_table(void)
{
	int i, j, k, a, b;

	for (i = 0 ; i < 10 ; i++)
	{
		for (j = 0 ; j < 10 ; j++)
		{
			k = i * j;
			if (k > 9)
			{
				b = k % 10;
				a = (k - b) / 10;
				_putchar(',');
				_putchar(' ');
				_putchar(a + '0');
				_putchar(b + '0');
			}
			else
			{
				if (j != 0)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
				}

				_putchar(k + '0');
			}
		}

		_putchar('\n');
	}
}
