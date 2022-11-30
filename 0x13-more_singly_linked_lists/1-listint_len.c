#include "lists.h"
#include <stdio.h>

/**
 * listint_len - total number of list element
 * @h: listint_t list ptr.
 *
 * Return: ret number of list.
 */
size_t listint_len(const listint_t *h)
{
	size_t nodes = 0;

	while (h)
	{
		nodes++;
		h = h->next;
	}

	return (nodes);
}
