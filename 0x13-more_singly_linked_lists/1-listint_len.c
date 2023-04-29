#include "lists.h"
#include <stdio.h>
/**
 * listint_len - counts number of elements in list
 * @h: list
 *
 * Return: number of nodes
 */
size_t listint_len(const listint_t *h)
{
	size_t number;

	number = 0;
	while (h != NULL)
	{
		number++;
		h = h->next;
	}
	return (number);
}
