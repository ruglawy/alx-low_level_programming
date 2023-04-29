#include "lists.h"
#include <stdio.h>
/**
 * add_nodeint - adds new node in a linked list
 * @head: list
 * @n: int variable
 *
 * Return: address of new element
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
	{
		free(new);
		return (NULL);
	}

	new->next = *head;
	new->n = n;
	*head = new;

	return (*head);
}
