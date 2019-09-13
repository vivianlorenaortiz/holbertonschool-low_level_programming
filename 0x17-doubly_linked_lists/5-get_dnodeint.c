#include "lists.h"

/**
 *get_dnodeint_at_index - function that returns the ntn node.
 *@head: Pointer, firt node in the list
 *@index: node to return.
 *Return: Pointer to the index.
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int count = 0;

	if (head == NULL)
		return (NULL);

	while (head != NULL)
	{
		if (count == index)
			return (head);
		count++;
		head = head->next;
	}
	return (NULL);
}
