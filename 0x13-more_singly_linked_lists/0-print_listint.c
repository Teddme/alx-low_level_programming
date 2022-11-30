#include "lists.h"
#include <stdio.h>

/**
 * print_listint - Prints listint_t list.
 * @h: list_t list ptr.
 *
 * Return: Output nodes.
 */
size_t print_listint(const listint_t *h)
{
	size_t nodes = 0;

	while (h)
	{
		nodes++;
		printf("%d\n", h->n);
		h = h->next;
	}

	return (nodes);
}
