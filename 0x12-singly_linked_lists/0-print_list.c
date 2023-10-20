#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_list - prints all elements of a list_t list
 * @h: pointer to the list for iteration
 * Return: number of nodes
 */
size_t print_list(const list_t *h)
{
	const list_t *temp;
	size_t i = 0;

	if (h && h->str == NULL)
		printf("[0] (nil)\n");
	else
	{
		temp = h;
		if (temp)
			temp = h;
		while (temp)
		{
			printf("[%d] %s\n", temp->len, temp->str);
			i++;
			temp = temp->next;
		}
	}
	return (i);
}
