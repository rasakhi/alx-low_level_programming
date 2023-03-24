#include <stdio.h>

/**
 * main - print numbers 1 to 100 but multiples of 3 will be printed as Fizz
 * multiples of five printed as Buzz and muttiples of 3 and 5 as FizzBuzz
 * Return: Always 0
 */
int main(void)
{
	int i = 1;

	while (i <= 100)
	{
		if (i % 3 == 0 && !(i % 5 == 0))
		{
			printf("Fizz ");
		}
		else if (i % 5 == 0 && !(i % 3 == 0))
		{
			printf("Buzz ");
		}
		else if (i % 3 == 0 && i % 5 == 0)
		{
			printf("FizzBuzz ");
		}
		else
		{
			printf("%d ", i);
		}

		i++;
	}

	printf("\n");

	return (0);
}

