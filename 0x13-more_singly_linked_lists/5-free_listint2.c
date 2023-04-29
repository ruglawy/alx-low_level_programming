#include "lists.h"
#include <stdio.h>
/**
 * free_listint2 - frees a linked list and sets head to NULL
 * @head: linked list
 *
 * Return: void
 */
void free_listint2(listint_t **head)
{
	listint_t *ptr, *traverse;

	if (head == NULL)
	{
		return;
	}
	traverse = *head;
	while (traverse != NULL)
	{
		ptr = traverse;
		traverse = traverse->next;
		free(ptr);
	}
	*head = NULL;
}
