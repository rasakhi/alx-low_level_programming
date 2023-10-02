#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * main - adds positive numbers passed as arguememnts
 * @argc: arguement count
 * @argv: arguement vector
 * Return: 0 if successful and 1 otherwise
 */
int main(int argc, char *argv[])
{
	int i;
	unsigned int j, sum = 0;
	char *c;

	if (argc > 1)
	{
		for (i = 1; i < argc; i++)
		{
			c = argv[i];

			for (j = 0; j < strlen(c); j++)
			{
				if (c[j] < 48 || c[j] > 57)
				{
					printf("Error\n");
					return (1);
				}
			}
			sum += atoi(c);
			c++;
		}
		printf("%d\n", sum);
	}
	else
		printf("0\n");
	return (0);
}
