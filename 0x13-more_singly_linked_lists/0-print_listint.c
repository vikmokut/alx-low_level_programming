#include "lists.h"

/**
 * print_listint - prints linked list h
 * @h: linked list node
 *
 * Description: a function to print a linked list
 *
 * Return: the number of nodes(node)
 */
size_t print_listint(const listint_t *h)
{
	size_t node = 0;

	while (h)
	{
		printf("%d\n", h->n);
		node++;
		h = h->next;
	}
	return (node);
}
