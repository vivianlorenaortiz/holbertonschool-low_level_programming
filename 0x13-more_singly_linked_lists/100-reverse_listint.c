#include "lists.h"

/**
 * reverse_listint - reverses a listint.
 * @head: double pointer.
 *
 * Return: pointer to the first node of the reversed list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *ants, *next;

	if (head == NULL || *head == NULL)
		return (NULL);
	if ((*head)->next == NULL)
		return (*head);
	ants = NULL;
	while (*head != NULL)
	{
		next = (*head)->next;
		(*head)->next = ants;
		ants = *head;
		*head = next;
	}
	*head = ants;
	return (*head);
}
