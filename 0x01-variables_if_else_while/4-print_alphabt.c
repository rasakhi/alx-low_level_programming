#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char lower_case = 'a';

	while (lower_case <= 'z')
	{
		putchar(lower_case);
		if (lower_case == 'd' || lower_case == 'p')
		{
			lower_case = lower_case + 2;
		} else
		{
			lower_case++;
		}
	}

	putchar('\n');

	return (0);
}
