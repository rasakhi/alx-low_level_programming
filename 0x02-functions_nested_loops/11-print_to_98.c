#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - prints all natural numbers from n to 98
 * @n: number to start printing from
 * Return: nothing
 */
void print_to_98(int n)
{
	if (n > 98)
	{
		for (; n >= 98 ; n--)
		{
		printf("%d", n);
			if (n != 98)
			{
				printf(", ");
			}
		}
		printf("\n");
	}
	else if (n < 98)
	{
		for (; n <= 98 ; n++)
		{
		printf("%d", n);
			if (n != 98)
			{
				printf(", ");
			}
		}
		printf("\n");
	}
	else
	{
		printf("%d\n", n);
	}
}
