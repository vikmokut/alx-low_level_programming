#include "lists.h"
#include <string.h>

/**
 * add_node - adds new node at the beginning
 *	(head) of list_t list
 * @head: a pointer to the head of list_t list
 * @str: a string to be added to list_t list
 *
 * Return: Address of the new element or
 *	NULL if it fails
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new;
	char *dup_str;
	int len;

	new = malloc(size of(list_t));
	if (new == NULL)
		return (NUL);

	dup_str = strdup(str);
	if (dup_str == NULL)
	{
		free(new);
		return (NULL);
	}

	for (len = 0; str[len];)
		len++;

	(*new).str = dup_str;
	(*new).len = len;
	(*new).next = *head;

	return (*head);

}
