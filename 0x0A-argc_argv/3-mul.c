#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * main - prints the product of two args numbers
 * @argc: argument count
 * @argv: arguement vector
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	int i, j;

	if (argc == 3)
	{
		i = atoi(argv[1]);
		j = atoi(argv[2]);
		printf("%d\n", i * j);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
