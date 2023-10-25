#include "lists.h"

/**
 * listint_len - returns the number of elements in a
 * linked list
 * @h: head of list
 * Return: numbaer of nodes
 */
size_t listint_len(const listint_t *h)
{
	size_t node_count = 0;

	while (h != NULL)
	{
		h = h->next;
		node_count++;
	}
	return (node_count);
}
