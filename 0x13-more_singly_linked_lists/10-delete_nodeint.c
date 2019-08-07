#include "lists.h"
/**
 *insert_nodeint_at_index - function that insert a new node at given position.
 *@head: Pointer to the first node in the list
 *@idx: Is the index of the list where the new node should be added.
 *@n: is the nuber contains node.
 *Return: The address of the new node, or NULL if it failed
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i = 0;
	listint_t *current, *nw;
	current = *head;

	if (head == NULL)
		return (-1);

	for (i = 0; current != NULL; i++)
	{
		if (i == (index - 1) && index != 0)
		{
			nw = current->next;
			current->next = nw->next;
			nw->next = NULL;
			free(nw);
			return (1);
		}
		else if (index == 0)
		{
			nw = *head;
			*head = nw->next;
			nw->next = NULL;
			free(nw);
			return (1);
		}
		current = current->next;
	}
	return (-1);
}
