#include <stdio.h>

/**
 * main - C program that prints different combinations of two digits
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int digit1;
	int digit2;

	for (digit1 = 48 ; digit1 < 58 ; digit1++)
	{
		for (digit2 = 49 ; digit2 < 58 ; digit2++)
		{
			if (digit1 < digit2)
			{
				putchar(digit1);
				putchar(digit2);
				if (digit1 != 56 || digit2 != 57)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}

	putchar('\n');

	return (0);
}
