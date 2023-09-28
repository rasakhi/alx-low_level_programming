#include "main.h"

/**
 * square_root - returns the natural square root of a number
 * @n: input number
 * @i: iterator
 * Return: square root or -1.
 */
int square_root(int n, int i)
{
	if (i % (n / i) == 0)
	{
		if (i * (n / i) == n)
			return (i);
		else
			return (-1);
	}
	return (square_root(n, i + 1));
}

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: number whose square root is to be computed
 * Return: square root of n or -1 if there is none
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (0);
	if (n == 1)
		return (1);
	return (square_root(n, 2));
}
