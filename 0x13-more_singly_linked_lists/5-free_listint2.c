#include "lists.h"

/**
 * free_listint2 - set a linked array free
 * @head: listint_t list reference that needs to be released
 */
void free_listint2(listint_t **head)
{
	listint_t *temp;

	if (head == NULL)
		return;

	while (*head)
	{
		temp = (*head)->next;
		free(*head);
		*head = temp;
	}

	*head = NULL;
}
