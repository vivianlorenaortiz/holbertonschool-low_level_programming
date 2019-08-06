#include "lists.h"

/**
 *free_listint - function that frees a listint list.
 *@head: pointer to a lines list
 *Return: ntg
 */

void free_listint(listint_t *head)
{
	listint_t *next;

	while (head != NULL)
	{
		next = head->next;
		free(head);
		head = next;
	}
}
