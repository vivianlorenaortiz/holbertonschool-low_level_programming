#include "lists.h"

/**
 * pop_listint - deletes the head node of a listint_t linked list
 * @head: double pointer of the prototype.
 * Return: the head node's data (n).
 */
int pop_listint(listint_t **head)
{
	listint_t *rm_node;
	int n;

	if (head == NULL || *head == NULL)
		return (0);
	rm_node = *head;
	*head = rm_node->next;
	n = rm_node->n;
	free(rm_node);
	return (n);
}
