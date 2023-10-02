#include <stdio.h>
#include <stdlib.h>

/**
 * main - multiplies two numbers from arguements
 * @argc: arguement count
 * @argv: arguement vector
 * Return: 0 if successful or 1 if unsuccessful
 */
int main(int argc, char *argv[])
{
	int mul;

	if (argc == 3)
	{
		mul = atoi(argv[1]) * atoi(argv[2]);
		printf("%d\n", mul);
		return (0);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
}
