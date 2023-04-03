#include "lists.h"

/**
 * pop_listint - removes the linked list head element
 * @head: pointer to the linked list top level entry
 *
 * Return: the information contained in the deleted parts,
 * or 0 if there is no such collection
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int num;

	if (!head || !*head)
		return (0);

	num = (*head)->n;
	temp = (*head)->next;
	free(*head);
	*head = temp;

	return (num);
}
