#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * argstostr - concatenates the arguments of my program
 * @ac: argument count
 * @av: arguement vector
 * Return: concatenated string
 */
char *argstostr(int ac, char **av)
{
	int i = 0, j = 0, k = 0, l = 0;
	char *s;

	if (ac == 0 || av == NULL)
		return (NULL);
	while (j < ac)
	{
		while (av[j][k])
		{
			i++;
			k++;
		}
		k = 0;
		j++;
	}
	s = malloc((sizeof(char) * i) + ac + 1);
	j = 0;
	while (av[j])
	{
		while (av[j][k])
		{
			s[l] = av[j][k];
			l++;
			k++;
		}
		s[l] = '\n';
		k = 0;
		l++;
		j++;
	}
	l++;
	s[l] = '\0';
	return (s);
}
