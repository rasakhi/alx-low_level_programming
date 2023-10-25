#include "lists.h"

/**
 * pop_listint - deletes the head node of a linked list
 * @head: head of the list
 * Return: Data of head node
 */
int pop_listint(listint_t **head)
{
	int h_element;
	listint_t *tmp;
	listint_t *current;

	if (*head == NULL)
		return (0);
	current = *head;
	h_element = current->n;
	tmp = current->next;
	free(current);
	*head = tmp;
	return (h_element);
}
