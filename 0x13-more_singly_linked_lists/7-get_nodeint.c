#include "lists.h"

/**
 *get_nodeint_at_index - function that returns the nth node of a listint.
 *@head: Pointer, frist node in the list
 *@index: node to return
 *Return: Pointer to the index.
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
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
