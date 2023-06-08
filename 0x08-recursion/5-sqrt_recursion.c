#include "main.h"

int natural_sqrt(int n, int c);

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: input number
 * Return: natural squareroot.
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	if (n == 0)
	{
		return (0);
	}
	if (n == 1)
	{
		return (1);
	}
	return (natural_sqrt(n, 2));
}
/**
 * natural_sqrt - returns the natural square root of a number
 * @n: input number
 * @c: the iterator
 * Return: square root of -1
 */
int natural_sqrt(int n, int c)
{
	if (c % (n / c) == 0)
	{
		if (c * (n / c) == n)
		{
			return (c);
		}
		else
		{
			return (-1);
		}
	}
	return (0 + natural_sqrt(n, c + 1));
}
