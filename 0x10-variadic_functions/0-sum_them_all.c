#include "variadic_functions.h"

/**
 * sum_them_all - sums all its parameters
 * @n: number of arguements
 * Return: sum of its parameters
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list num_sum;
	unsigned int i;
	int sum = 0;

	if (n == 0)
		return (0);
	va_start(num_sum, n);
	i = 0;
	while (i < n)
	{
		sum += va_arg(num_sum, int);
		i++;
	}
	va_end(num_sum);
	return (sum);
}
