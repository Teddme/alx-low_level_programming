#include "lists.h"

/**
 * get_nodeint_at_index - find specfic node in listint_t linked list.
 * @head: listint_t list ptr.
 * @index: searched item index.
 *
 * Return: ret searched node or Null
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int node;

	for (node = 0; node < index; node++)
	{
		if (head == NULL)
			return (NULL);

		head = head->next;
	}

	return (head);
}
