#include "lists.h"
#include <string.h>

/**
 * add_node - adda a new node at the beginning of a list
 * @head: double pointer to the list
 * @str: new string to add
 * Return: the address of the new element or NULL
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new;
	unsigned int length = 0;

	while (str[length])
		length++;
	new = malloc(sizeof(list_t));
	if (!new)
		return (NULL);
	new->str = strdup(str);
	new->len = length;
	new->next = (*head);
	(*head) = new;
	return (*head);
}
