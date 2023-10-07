#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * malloc_checked - allocates memory using malloc
 * @b - byte size to allocate
 */
void *malloc_checked(unsigned int b)
{
	void *i;

	i = malloc(b);
	if (i == NULL)
		exit(98);
	return (i);
}
