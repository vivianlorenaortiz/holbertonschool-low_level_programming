#include "lists.h"

/**
 *print_listint - prints all the elements of a list_t list.
 *@h: reference position of fuction.
 *Return: number of nodes.
 */


size_t print_listint(const listint_t *h)
{
	size_t cont = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		cont++;
	}
	return (cont);
}
