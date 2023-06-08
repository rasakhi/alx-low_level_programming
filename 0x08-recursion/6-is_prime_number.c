#include "main.h"

int is_prime(unsigned int n, unsigned int i);
/**
 * is_prime_number - detects if a number is a prime number
 * @n: input number
 * Return: 1 if n is a prime number and 0 otherwise
 */
int is_prime_number(int n)
{
	if (n == 0)
	{
		return (0);
	}
	if (n < 0)
	{
		return (0);
	}
	if (n == 1)
	{
		return (0);
	}
	return (is_prime(n, 2));
}
/**
 * is_prime - detects if a number is a prime number
 * @n: input number
 * @i: the iterator
 * Return: 1 if n is a prime number and 0 otherwise
 */
int is_prime(unsigned int n, unsigned int i)
{
	if (n % i == 0)
	{
		if (n == i)
		{
			return (1);
		}
		else
		{
			return (0);
		}
	}
	return (0 + is_prime(n, i + 1));
}
