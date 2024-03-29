#include "lists.h"

/**
 * get_nodeint_at_index - returns the element in a linked list of a specific index
 * @head: initial node of a linked collection
 * @index: the nodes return number
 *
 * Return: pointer to the desired component, otherwise NULL
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *temp = head;

	while (temp && i < index)
	{
		temp = temp->next;
		i++;
	}

	return (temp ? temp : NULL);
}
