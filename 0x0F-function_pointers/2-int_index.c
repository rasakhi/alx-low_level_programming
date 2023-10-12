#include "function_pointers.h"

/**
 * int_index - searches for an integer
 * @array: integer array to be checked
 * @size: size of the array
 * @cmp: functon pointer
 * Return: index of 1st element that meets criteria
 * -1 if no element matches or size <= 0
 */
int int_index(int *array, int size, int(*cmp)(int))
{
	int i;

	if (array && cmp)
	{
		if (size <= 0)
			return (-1);
		for (i = 0; i < size; i++)
		{
			if (cmp(array[i]))
				return (i);
		}
	}
	return (-1);
}
