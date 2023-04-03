#include "lists.h"

/**
 * reverse_listint - turns a commercial list around
 * @head: pointer to its list root element
 *
 * Return: a reference to the top-level node of the new collection
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev = NULL;
	listint_t *next = NULL;

	while (*head)
	{
		next = (*head)->next;
		(*head)->next = prev;
		prev = *head;
		*head = next;
	}

	*head = prev;

	return (*head);
}
