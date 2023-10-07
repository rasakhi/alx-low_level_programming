#include "main.h"
#include <stdlib.h>

/**
 * _calloc - allocates memory for an array
 * @nmemb: number of elements
 * @size: number of bytes of element
 * Return: Nothing
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	int i = 0, length;
	char *arr;

	if (nmemb == 0 || size == 0)
		return (NULL);
	length = nmemb * size;
	arr = malloc(length);
	if (arr == NULL)
		return (NULL);
	while (i < length)
	{
		arr[i] = 0;
		i++;
	}
	return (arr);
}
