#include "lists.h"

/**
 *delete_nodeint_at_index- function that insert a new node at given position.
 *@head: double pointer to the first node in the list
 *@index: index of the node to delete.
 *
 *Return: Pointer to the indexed node
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i;
	listint_t *current, *nw;

	if (head == NULL || *head == NULL)
		return (-1);
	if (index != 0)
	{

		nw = (*head)->next;
		free(*head);
		*head = nw;
		return (1);
	}
	current = *head;
	for (i = 0; i < index - 1; i++)
	{
			if (current == NULL)
				return (-1);
			current = current->next;
	}
	nw = current->next;
	current->next = nw->next;
	free(nw);
	return (1);
}
