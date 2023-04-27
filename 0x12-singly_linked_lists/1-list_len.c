#include "lists.h"
#include <stdio.h>
/**
 * list_len - returns length of list
 * @h: list
 *
 * Return: length of list
 */
size_t list_len(const list_t *h)
{
	size_t length = 0;

	while (h != NULL)
	{
		length++;
		h = h->next;
	}
	return (length);
}
