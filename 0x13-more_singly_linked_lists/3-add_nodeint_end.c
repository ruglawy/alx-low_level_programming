#include "lists.h"
#include <stdio.h>
/**
 * add_nodeint_end - adds node to the end of the list
 * @head: list
 * @n: int variable
 *
 * Return: address of new node
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new, *traverse;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
	{
		free(new);
		return (NULL);
	}

	new->n = n;
	traverse = *head;

	while (traverse->next != NULL)
	{
		traverse = traverse->next;
	}
	traverse->next = new;

	return (new);

}
