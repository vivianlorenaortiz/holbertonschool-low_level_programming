#include "lists.h"

/**
 *listint_len - print all the elements of elements in a linked.
 *@h: reference position of fuction.
 *Return: number of elements in linked.
 */
size_t listint_len(const listint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		count++;
		h = h->next;
	}
	return (count);
}
