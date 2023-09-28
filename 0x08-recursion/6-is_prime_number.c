#include "main.h"

/**
 * prime_number - checks if an integer is a prime number
 * @n: integer
 * @i: iterator
 * Return: 1 if n is a prime number and 0 otherwise
 */
int prime_number(unsigned int n, unsigned int i)
{
	if (n % i == 0)
	{
		if (n == i)
			return (1);
		else
			return (0);
	}
	return (prime_number(n, i + 1));
}
/**
 * is_prime_number - checks if an input is a prime number
 * @n: number to be checked
 * Return: 1 if n is a prime number and 0 otherwise
 */
int is_prime_number(int n)
{
	if (n < 0)
		return (0);
	if (n == 0)
		return (0);
	if (n == 1)
		return (0);
	return (prime_number(n, 2));
}
