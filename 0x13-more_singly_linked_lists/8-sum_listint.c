#include "lists.h"
#include <stdio.h>
/**
 * sum_listint - sums all data in linked list
 * @head: list
 *
 * Return: sum
 */
int sum_listint(listint_t *head)
{
	listint_t *ptr;
	int sum = 0;

	ptr = head;
	while (ptr != NULL)
	{
		sum += ptr->n;
		ptr = ptr->next;
	}
	return (sum);
}
