#include "lists.h"

/**
 * list_len - Compute the number of elements in a list
 * @h: pointer to the list
 * Return: number of elements
 */
size_t list_len(const list_t *h)
{
	const list_t *tmp;
	unsigned int i = 0; /* counter */

	tmp = h;
	while (tmp)
	{
		i++;
		tmp = tmp->next;
	}
	return (i);
}
