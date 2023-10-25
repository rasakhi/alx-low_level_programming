#include "lists.h"

/**
 * delete_nodeint_at_index - deletes a node at index of a list
 * @head: head of the list
 * @index: index of the list where the node is to be deleted
 * Return: 1 if succesful and -1 if it fails
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i;
	listint_t *pre;
	listint_t *nxt;

	pre = *head;
	if (index != 0)
	{
		for (i = 0; i < index - 1 && pre != NULL; i++)
		{
			pre = pre->next;
		}
	}
	if (pre == NULL || (pre->next == NULL && index != 0))
	{
		return (-1);
	}
	nxt = pre->next;
	if (index != 0)
	{
		pre->next = nxt->next;
		free(nxt);
	}
	else
	{
		free(pre);
		*head = nxt;
	}
	return (1);
}
