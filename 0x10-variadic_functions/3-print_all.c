#include "variadic_functions.h"

/**
 * print_all - prints anything
 * @format: a list of types of arguements passed to function
 * Return: Nothing
 */
void print_all(const char * const format, ...)
{
	va_list print_any;
	unsigned int i = 0, j, c = 0;
	char *string;
	const char f_arg[] = "cifs";

	va_start(print_any, format);
	while (format && format[i])
	{
		j = 0;
		while (f_arg[j])
		{
			if (format[i] == f_arg[j] && c)
			{
				printf(", ");
				break;
			} j++;
		}
		switch (format[i])
		{
			case 'c':
			printf("%c", va_arg(print_any, int)), c = 1;
			break;
			case 'i':
			printf("%d", va_arg(print_any, int)), c = 1;
			break;
			case 'f':
			printf("%f", va_arg(print_any, double)), c = 1;
			break;
			case 's':
			string = va_arg(print_any, char *), c = 1;
			if (!string)
			{
				printf("(nil)");
				break;
			}
			printf("%s", string);
			break;
		} i++;
	}
	printf("\n"), va_end(print_any);
}
