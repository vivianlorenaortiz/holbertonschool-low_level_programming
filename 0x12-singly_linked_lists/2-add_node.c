#include "lists.h"
/**
 *_strlen - length of a string
 *@str: string find the length
 *Return: length of the string
 */
int _strlen(char *str)
{
	int i;

	for (i = 0; str[i]; i++)
		;
	return (i);
}

/**
 *add_node - adds a new node at the beginning of a list_t list.
 *@head: double pointer to a lines list
 *@str: stirng to add
 *Return: pointer to the new node
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *nw;

	if (str == NULL)
		return (NULL);
	nw = malloc(sizeof(list_t));
	if (nw == NULL)
		return (NULL);
	nw->str = strdup(str);
	if (nw->str == NULL)
	{
		free(nw);
		return (NULL);
	}
	nw->len = _strlen(nw->str);
	nw->next = *head;
	*head = nw;
	return (nw);
}
