#include "lists.h"
/**
 * sum_dlistint - sums up all the n's
 * @head: list
 *
 * Return: sum
 */
int sum_dlistint(dlistint_t *head)
{
	dlistint_t *traverse;
	int sum = 0;

	traverse = head;
	if (head == NULL)
	{
		return (0);
	}
	while (traverse != NULL)
	{
		sum += traverse->n;
		traverse = traverse->next;
	}
	return (sum);
}
