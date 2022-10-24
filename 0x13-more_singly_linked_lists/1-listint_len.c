#include "lists.h"

/**
 * listint_len - takes node as argument
 * @h: node
 *
 * Description: finds the number of elements in a linked list
 *
 * Return: number of element(node)
 */
size_t listint_len(const listint_t *h)
{
	size_t node = 0;

	while (h)
	{
		node++;
		h = h->next;
	}

	return (node);
}
