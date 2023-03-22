#include "main.h"

/**
 * jack_bauer - prints every minute of the day of Jack Bauer
 */
void jack_bauer(void)
{
	char a, b, c, d;

	for (a = '0' ; a < '3' ; a++)
	{
	for (b = '0' ; b < '9' ; b++)
	{
	for (c = '0' ; c < '6' ; c++)
	{
	for (d = '0' ; d <= '9' ; d++)
	{
		if (a < '3' && b < '4')
		{
			_putchar(a);
			_putchar(b);
			_putchar(':');
			_putchar(c);
			_putchar(d);
			_putchar('\n');
		}
	}
	}
	}
	}
}
