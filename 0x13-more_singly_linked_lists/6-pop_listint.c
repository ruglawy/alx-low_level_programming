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
	list *ptr;
	int n;

	ptr = *head;
	n = ptr->n;
	*head = ptr->next;
	free(ptr);
	return (n);
}
