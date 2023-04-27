#include "lists.h"
#include <stdio.h>
/**
 * free_list - empties a list
 * @head: list
 *
 * Return: void
 */
void free_list(list_t *head)
{
	list_t *ptr, *traverse;

	traverse = head;
	while (traverse != NULL)
	{
		ptr = traverse;
		traverse = traverse->next;
		free(ptr->str);
		free(ptr);
	}
}
