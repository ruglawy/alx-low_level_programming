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
	size_t num;

	num = 0;
	while (h != NULL)
	{
		if (h->str != NULL)
		{
			printf("[%d] %s\n", h->len, h->str);
		}
		else
		{
			printf("[%d] %s\n", 0, "(nil)");
		}
		h = h->next;
		number++;
	}
	return (num);
}
