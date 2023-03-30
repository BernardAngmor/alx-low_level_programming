
#include "lists.h"

/**
 * free_list - Frees a list_t
 * @head: A pointer to the first list
 * Return: nil
 */
void free_list(list_t *head)
{
	list_t *check, *a;

a = head;
while (a != NULL)
{
	check = a->next;
	free(a->str);
	free(a);
	a = check;
}

}
