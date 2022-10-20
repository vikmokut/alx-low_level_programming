#include <stdio.h>
#include "lists.h"

/**
 * print_list - function to print all the element of a list
 * @h: a node pointing to list_t
 *
 * Description: a function that
 *	prints all the elements of a list_t list
 *	if str is NULL, prints [0] (nil)
 *
 * Return: number of nodes
 */
size_t print_list(const list_t *h)
{
	size_t node = 0;

	while (h)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");

		else
			printf("[%d] %s\n", h->len, h->str);

		node++;
		h = h->next;
	}

	return (node);
}
