#include "lists.h"

/**
 * add_node_end - Adds a new node at the end of a list
 * @head: Address of first node
 * @str: address of string to be inserted into new node
 * Return: Address of new node
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *tmp, *tmp2;
	unsigned int length = 0;

	if (str == NULL)
		return (NULL);
	tmp = malloc(sizeof(list_t));
	if (tmp == NULL)
		return (NULL);
	tmp->str = strdup(str);
	if (tmp->str == NULL)
	{
		free(tmp);
		return (NULL);
	}
	while (str[length])
		length++;
	tmp->len = length;
	tmp->next = NULL;
	if (*head == NULL)
	{
		*head = tmp;
		return (tmp);
	}
	tmp2 = *head;

	while (tmp2->next)
		tmp2 = tmp2->next;
	tmp2->next = tmp;
	return (tmp);
}
