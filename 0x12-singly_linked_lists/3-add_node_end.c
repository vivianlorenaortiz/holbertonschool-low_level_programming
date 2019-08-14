#include "lists.h"

/**
 *_strlen - returns the length of a string
 *@s: is a character
 * Return: 0;
 */

int _strlen(const char *s)
{
	if (*s == '\0')
		return (0);
	return ((1) + _strlen(s + 1));
}

/**
 * add_node_end - function that adds a new node at the end
 * @head: linked list data structure header
 * @str: value of new node
 * Return: number of nodes
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new;
	list_t *lst;
	int i;

	i = _strlen(str);
	lst = *head;

	new = malloc(sizeof(list_t));

	if (new == NULL)
		return (NULL);

	new->str = strdup(str);
	new->next = NULL;
	new->len = i;

	new->next = NULL;

	if (*head == NULL)
	{
		*head = new;
		return (*head);
	}

	while (lst->next != NULL)
		lst = lst->next;

	lst->next = new;
	return (new);
}
