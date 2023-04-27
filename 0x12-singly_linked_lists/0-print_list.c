#include "lists.h"
#include <stdio.h>
/**
 * print_list - prints elements of linked list
 * @h: list
 *
 * Return: number of nodes in linked list
 */
size_t print_list(const list_t *h)
{
	size_t number = 0;

	while (h != NULL)
	{
		if (h->str != NULL)
		{
			printf("[%d] %s\n", h->len, h->str);
		}
		else
		{
			printf("[0] (nil)\n");
		}
		h = h->next;
		number++;
	}
	return (number);
}
