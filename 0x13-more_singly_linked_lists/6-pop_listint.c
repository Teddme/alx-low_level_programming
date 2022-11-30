#include "lists.h"

/**
 * pop_listint - remove the head node of a listint_t list.
 * @head: listint_t list ptr.
 *
 * Return: ret head of node or 0
 */
int pop_listint(listint_t **head)
{
	listint_t *tmp;
	int ret;

	if (*head == NULL)
		return (0);

	tmp = *head;
	ret = (*head)->n;
	*head = (*head)->next;

	free(tmp);

	return (ret);
}
