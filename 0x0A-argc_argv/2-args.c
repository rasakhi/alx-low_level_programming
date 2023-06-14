#include "main.h"
#include <stdio.h>

/**
 * main - prints all the args in a new line
 * @argc: arguement count
 * @argv: arguement vector
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	int i = 0;

	while (i < argc)
	{
		printf("%s\n", argv[i]);
		i++;
	}
	return (0);
}
