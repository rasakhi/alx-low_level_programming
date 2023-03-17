#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int dgt_10 = '0';

	while (dgt_10 <= '9')
	{
		putchar(dgt_10);
		dgt_10++;
	}

	putchar('\n');

	return (0);
}
