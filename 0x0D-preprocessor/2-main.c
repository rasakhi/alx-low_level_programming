#include <stdio.h>

/**
 * main - prints the name of the file the program is compiled from
 *
 * Return: 0.
 */
int main(void)
{
	printf("%s\n" __FILE__);
	return (0);
}
