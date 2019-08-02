#include "lists.h"

/**
 *list_len - returns the number of elements in a linked list_t list.
 *@h:reference position function
 *Return: number of nodes of the function
 */

size_t list_len(const list_t *h)
{
	int i = 0;

	while (h != NULL)
	{
		i++;
		h = h->next;
	}
	return (i);
}
