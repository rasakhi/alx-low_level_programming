#include <stdio.h>

/**
 * main - prints the first 50 Fibonacci numbers
 * starting with 1 and 2 followed by a new line
 * Return: Always 0;
 */

int main(void)
{
	int i;
	long int j, k;

	j = 1;
	k = 2;

	printf("%ld, %ld, ", j, k);
	for (i = 0; i < 47; i++)
	{
		long int l;

		l = k + j;
		printf("%ld, ", l);
		j = k;
		k = l;
	}
	printf("%ld\n", j + k);
	return (0);
}
