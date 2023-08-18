#include "lists.h"
/**
 * free_dlistint - frees list
 * @head: head of list
 *
 * Return: void
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *traverse;

	if (head == NULL)
	{
		return;
	}
	while (head != NULL)
	{
		traverse = head;
		head = head->next;
		free(traverse);
	}
}
