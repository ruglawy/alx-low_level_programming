#include "lists.h"
#include <stdio.h>
/**
 * print_listint - prints linked list
 * @h: list
 *
 * Return: number of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t number;

	number = 0;
	while (h != NULL)
	{
		printf("%d\n", h->n);
		number++;
		h = h->next;
	}
	return (number);
}
