#include "variadic_functions.h"

/**
 * print_strings - prints strings followed by a new line
 * @seperator: string to be printed between strings
 * @n: number of strings passed into the function
 * Return: Nothing
 */
void print_strings(const char *seperator, const unsigned int n, ...)
{
	va_list print_str;
	unsigned int i;
	char *string;

	va_start(print_str, n);
	i = 0;
	while (i < n)
	{
		string = va_arg(print_str, char *);
		if (string)
			printf("%s", string);
		else
			printf("(nil)");
		if (i < n - 1)
		{
			if (seperator)
				printf("%s", seperator);
		}
		i++;
	}
	printf("\n");
	va_end(print_str);
}
