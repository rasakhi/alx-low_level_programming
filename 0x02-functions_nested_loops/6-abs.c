#include "main.h"

/**
 * _abs - funtion that prints absolute value of integer
 *
 * @i: integer to print absolute value
 *
 * Return: Always 0
 */
int _abs(int i)
{
	if (i < 0)
	{
		i = i * -1;
		return (i);
	}
	else
	{
		return (i);
	}
}
