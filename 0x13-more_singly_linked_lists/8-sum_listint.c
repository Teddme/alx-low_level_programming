#include "lists.h"

/**
 * sum_listint - get sum of listint
 * @head: listint_t ptr.
 *
 * Return: ret sum or 0
 */
int sum_listint(listint_t *head)
{
	int sum = 0;

	while (head)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}
