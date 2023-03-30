
#include "lists.h"

/**
 * _strlen - lenght of string
 * @s:char
 * Return:int
 */
unsigned int _strlen(char *s)
{
	int k;

		for (k = 0; s[k] != '\0'; k++)
		{
			continue;
		}
return (k);
}
/**
 * add_node_end - add new node at the end of the list
 * @head:pointer to ponter to first list
 * @str : ponter to string
 * Return:pointer to a node at the end of the list
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *first, *last;

	if (str == NULL)
		return (NULL);
	first = malloc(sizeof(list_t));
	if (first == NULL)
		return (NULL);
	first->str = strdup(str);
	if (first->str == NULL)
	{
		free(first);
		return (NULL);
	}
	first->len = _strlen(first->str);
	first->next = NULL;
	if (*head == NULL)
	{
		*head = first;
	}
	else
	{
	last = *head;
		while (last->next)
		{
		last = last->next;
		}
	last->next = first;
	}
	return (first);
}
