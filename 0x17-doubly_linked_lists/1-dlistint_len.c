#include "lists.h"
/**
 * dlistint_len - returns numer of elements
 * @h: list
 *
 * Return: number of elements
 */
size_t dlistint_len(const dlistint_t *h)
{
	int count = 0;

	if (h == NULL)
	{
		return (0);
	}
	while (h != NULL)
	{
		h = h->next;
		count++;
	}
	return (count);
}
