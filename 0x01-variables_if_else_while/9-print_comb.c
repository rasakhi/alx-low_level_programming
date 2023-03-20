#include <stdio.h>

/**
 * main - Program to print 0 to 9 seperated by commas
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i = 48;

	while (i < 58)
	{
		putchar(i);
		if (i != 57)
		{
			putchar(',');
			putchar(' ');
		}

		i++;
	}

	putchar('\n');

	return (0);
}
