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
	char *ptr = &h;
	int number = 0;

	while (ptr != NULL)
	{
		if (ptr->str != NULL)
		{
			printf("[%d] %s\n", ptr->len, ptr->str);
		}
		else
		{
			printf("[0] (nil)");
		}
		ptr = ptr->next;
		number++;
	}
	return (number);
}
