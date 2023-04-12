#include <stdio.h>

/**
 * main - program thats print the sum of all even valued terms
 * that do not exceed 4,000,000
 * Return: Always 0.
 */

int main(void)
{
	int i;
	long int j, k, sum;

	j = 1;
	k = 2;
	sum = 2;
	for (i = 0 ; i < 30 ; i++)
	{
		long int l;

		l = k + j;
		if (l < 4000000 && l % 2 == 0)
		{
			sum = sum + l;
		}
		j = k;
		k = l;
	}
	printf("%ld\n", sum);
	return (0);
}
