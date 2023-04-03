#include "lists.h"

/**
 * free_listint - sets a linked array free
 * @head: listint_t that needs to be freed
 */
void free_listint(listint_t *head)
{
	listint_t *temp;

	while (head)
	{
		temp = head->next;
		free(head);
		head = temp;
	}
}
