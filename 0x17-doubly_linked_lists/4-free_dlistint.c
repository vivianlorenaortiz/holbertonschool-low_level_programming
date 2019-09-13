#include "lists.h"

/**
 *free_dlistint - function that free a dlistint.
 *@head: pointer to a dlistint.
 *Return: ntg
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *next;

	while (head != NULL)
	{
		next = head->next;
		free(head);
		head = next;
	}
}
