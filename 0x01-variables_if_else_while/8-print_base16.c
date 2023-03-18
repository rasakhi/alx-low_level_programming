#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int digit = '0';
	char alpha = 'a';

	while (digit <= '9')
	{
		putchar(digit);
		digit++;
	}
	while (alpha < 'g')
	{
		putchar(alpha);
		alpha++;
	}

	putchar('\n');

	return (0);
}
