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
	unsigned int i;
	listint_t *current, *nw;

	if (head == NULL)
		return (NULL);
	if (idx != 0)
	{

		current = *head;
		for (i = 0; i < idx - 1 && current != NULL; i++)
		{
			current = current->next;
		}
		if (current == NULL)
			return (NULL);
	}
	nw = malloc(sizeof(listint_t));
	if (nw == NULL)
		return (NULL);
	nw->n = n;
	if (idx == 0)
	{
		nw->next = *head;
		*head = nw;
		return (nw);
		}
	nw->next = current->next;
	current->next = nw;
	return (nw);
}
