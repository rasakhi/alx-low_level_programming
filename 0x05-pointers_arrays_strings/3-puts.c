#include "main.h"

/**
 * _puts - prints a string followed by a new line to stdout
 * @str: string to be printed
 */
void _puts(char *str)
{
	_putchar(*str);

	while (*str++)
	{
		if (*str != '\0')
		{
			_putchar(*str);
		}
	}

	_putchar('\n');
}
