#include "lists.h"

/**
 * sum_listint - sum up all the information in a listint_t list
 * @head: initial node linked collection
 *
 * Return: resultant amount
 */
int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *temp = head;

	while (temp)
	{
		sum += temp->n;
		temp = temp->next;
	}

	return (sum);
}
