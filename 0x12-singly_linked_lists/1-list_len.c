#include "lists.h"

/**
 * list_len - number of elements in a linked list_t list.
 * @h: pointer
 * Return: nodes in the list
 */
size_t list_len(const list_t *h)
{
	size_t len = 0;
	int k;
	const list_t *b = h;

	for (k = 0; b; k++)
	{
	b = b->next;
	len++;
	}
return (len);
}
