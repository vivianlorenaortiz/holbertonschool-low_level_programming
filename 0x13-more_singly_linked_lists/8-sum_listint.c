#include "lists.h"

/**
 *sum_listint - return the sum of all the dara (n) of a listins linked list.
 *@head: Pointer to the first node in the list.
 *Return: Sum of al the data (n).
 */

int sum_listint(listint_t *head)
{
	int sum = 0;

	if (head == NULL)
		return (0);

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
