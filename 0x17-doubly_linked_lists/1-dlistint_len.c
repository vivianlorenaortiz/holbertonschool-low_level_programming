#include "lists.h"

/**
 *dlistint_len - function that returns the number of elements in a linked.
 *@h: reference position of function.
 *Return: The number of elements in a linked.
 *
 */

size_t dlistint_len(const dlistint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		count++;
		h = h->next;
	}
	return (count);
}
