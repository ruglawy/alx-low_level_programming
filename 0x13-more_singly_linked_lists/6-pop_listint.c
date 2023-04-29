#include "lists.h"
#include <stdio.h>
/**
 * pop_listint - deletes head of linked list
 * @head: list
 *
 * Return: data of head
 */
int pop_listint(listint_t **head)
{
	listint_t *ptr;
	int n;

	if (*head == NULL)
	{
		return (0);
	}
	ptr = *head;
	n = ptr->n;
	*head = ptr->next;
	free(ptr);
	return (n);
}
