#include "main.h"

/**
 * puts_half - prints half a string followed by a new line
 * @str: string to printed from
 */
void puts_half(char *str)
{
	int i, j;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	if (i % 2 == 1)
	{
		j = (i - 1) / 2;
		j += 1;
	}
	else
	{
		j = i / 2;
	}

	for (; j < i ; j++)
	{
		_putchar(str[j]);
	}

	_putchar('\n');
}
