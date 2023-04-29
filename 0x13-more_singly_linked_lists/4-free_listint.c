#include "lists.h"
#include <stdio.h>
/**
 * free_listint - frees a linked list
 * @head: list
 *
 * Return: void
 */
void free_listint(listint_t *head)
{
	listint_t *ptr, *traverse;

	traverse = head;
	while (traverse != NULL)
	{
		ptr = traverse;
		traverse = traverse->next;
		free(ptr);
	}
}
