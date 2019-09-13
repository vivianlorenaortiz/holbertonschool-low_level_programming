#include "lists.h"

/**
 *add_dnodeint_end - function that adds a new node at the end of a dlistint.
 *@head: double pointer.
 *@n: integer to add to the list.
 *Return: The address of the new element, or NULL if it failed.
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new;
	dlistint_t *tmp_node;

	if (head == NULL)
		return (NULL);

	new = malloc(sizeof(dlistint_t));

	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = NULL;
	if (*head == NULL)
	{
		new->prev = NULL;
		*head = new;
		return (new);
	}
	tmp_node = *head;
	while (tmp_node->next != NULL)
		tmp_node = tmp_node->next;
	tmp_node->next = new;
	new->prev = tmp_node;
	return (new);
}
