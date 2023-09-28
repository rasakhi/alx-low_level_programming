#include "main.h"

/**
 * _pow_recursion - returns the value of x raised to y
 * @x: base number
 * @y: exponent
 * Return: the value of x raised to y or -1 if y < 0
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	else if (y == 0)
		return (1);
	else
		return (_pow_recursion(x, (y - 1)) * x);
}
