#include "main.h"

/**
 * factorial - returns the factorial of a given number
 * @n: number whose factorial is computed
 * Return: factorial of n or -1 if n < 0
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 0 || n == 1)
		return (1);
	else
		return (n * factorial(n - 1));
}
