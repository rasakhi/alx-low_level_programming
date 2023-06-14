#include "main.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/**
 * main - prints the sum of positive number args
 * @argc: arguement count
 * @argv: arguement vector
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	int i;
	unsigned int j, sum = 0;
	char *arg;

	if (argc > 1)
	{
		for (i = 1; i < argc; i++)
		{
			arg = argv[i];
			for (j = 0; j < strlen(arg); j++)
			{
				if (arg[j] < 48 || arg[j] > 57)
				{
					printf("Error\n");
					return (1);
				}
			}
			sum += atoi(arg);
			arg++;
		}
		printf("%d\n", sum);
	}
	else
	{
		printf("0\n");
	}
	return (0);
}
