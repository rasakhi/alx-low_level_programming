#include "main.h"

/**
 * print_square - prints a squar
 * @size: dimension of square
 */
void print_square(int size)
{
	if (size > 0)
	{
		int height = size;

		while (height > 0)
		{
			int length = size;

			while (length > 0)
			{
				_putchar('#');
				length--;
			}
			_putchar('\n');
			height--;
		}
	}
	else
	{
		_putchar('\n');
	}
}
