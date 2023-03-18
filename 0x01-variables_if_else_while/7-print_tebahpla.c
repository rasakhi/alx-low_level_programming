#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char lower_case = 'z';

	while (lower_case >= 'a')
	{
		putchar(lower_case);
		lower_case--;
	}

	putchar('\n');

	return (0);
}
