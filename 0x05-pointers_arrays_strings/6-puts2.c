#include "main.h"

/**
 * puts2 - prints every other character of a string. starting from
 * the first character followed by a new line
 * @str: string to be printed from
 */
void puts2(char *str)
{
	int i = 0;
	int j = 0;

	while (str[i] != '\0')
	{
		i++;
	}

	for (; j < i ; j += 2)
	{
		_putchar(str[j]);
	}

	_putchar('\n');
}
