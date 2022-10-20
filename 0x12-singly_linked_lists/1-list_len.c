#include "lists.h"

/**
 * list_len - returns the number of elements in a linked list
 * @h: nodes of list_t
 *
 * Description: function for above operation
 * Return: node
 */
size_t list_len(const list_t *h)
{
	size_t node;

	while (h)
	{
		node++;
		h = (*h).next;
	}

	return (node);
}
