#include "lists.h"

/**
 * _strlen - lenght of string
 * @s:char
 * Return:int
 */
unsigned int _strlen(char *s)
{
	int a;

		for (a = 0; s[a] != '\0'; a++)
		{
			continue;
		}
return (a);
}
/**
 * add_node - adding node
 * @head:first node list
 * @str:string
 * Return: node
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *fresh;

	if (str == NULL)
		return (NULL);
fresh = malloc(sizeof(list_t));
	if (fresh == NULL)
	{
		return (NULL);
	}
fresh->str = strdup(str);
	if (fresh->str == NULL)
	{
		free(fresh);
		return (NULL);
	}
fresh->len = _strlen(fresh->str);
fresh->next = *head;
*head = fresh;
return (fresh);
}
