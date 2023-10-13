#include "variadic_functions.h"

/**
 * print_numbers - prints numbers followed by a new line
 * @seperator: string to be printed between numbers
 * @n: number of integers passed into the function
 * Return: Nothing
 */
void print_numbers(const char *seperator, const unsigned int n, ...)
{
	va_list print_num;
	unsigned int i;

	va_start(print_num, n);
	i = 0;
	while (i < n)
	{
		printf("%d", va_arg(print_num, int));
		if (seperator && i < n - 1)
			printf("%s", seperator);
		i++;
	}
	printf("\n");
	va_end(print_num);
}
