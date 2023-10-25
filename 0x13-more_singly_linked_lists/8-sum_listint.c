#include "lists.h"

/**
 * sum_listint - returns the sum of all data in a list
 * @head: head of the list
 * Return: sum of all elements
 */
int sum_listint(listint_t *head)
{
	int sum = 0;

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
